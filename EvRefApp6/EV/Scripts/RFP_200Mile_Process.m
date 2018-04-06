% Optimization of parameters to achieve 200 mile range
clear workspace

% Model references
model_hdl = 'EvReferenceApplication';
battev_hdl = 'BattEv';
motgen_hdl = 'MotGenEvMapped';
ctrl_hdl = 'EvPowertrainController_KO';
chass_hdl = 'DrivetrainEv';

% get model workspaces
mot_mdl_wrks = get_param(motgen_hdl, 'ModelWorkspace');
batt_mdl_wrks = get_param(battev_hdl, 'ModelWorkspace');
ctrl_mdl_wrks = get_param(ctrl_hdl, 'ModelWorkspace');
chass_mdl_wrks = get_param(chass_hdl, 'ModelWorkspace');

% get variables from battery plant
% to estimate max energy
LUTBattOCV_V = getVariable(batt_mdl_wrks, 'Em');
BPBattSOC = getVariable(batt_mdl_wrks, 'CapLUTBp');
BattMaxChrg_Ah = getVariable(batt_mdl_wrks, 'BattChargeMax');
BPBattCap_Ah = BattMaxChrg_Ah * BPBattSOC;

% max electrical energy deliverable by a cell
% integral under open circuit voltage curve for cell
CellEnrgMax_Whr = trapz(BPBattCap_Ah, LUTBattOCV_V);
BattEnrgMax_Whr = Np * Ns * CellEnrgMax_Whr;
% set model parameters
% TODO: set drive cycle programmatically to US06
% for now user must set this manually from simulink
% battery model
Np = 3; % default : 2      4*90 is good
Ns = 80;% default: 96
EnrgDens_WhPKg = 160;   % source: LG Chem x Proterra
BattCellMass_Kg = CellEnrgMax_Whr / EnrgDens_WhPKg;
% default chassis weight based on default ESS parameters
DefaultESSMass_Kg = 2 * 96 * BattCellMass_Kg;
MassChassis_Kg = 1500 - DefaultESSMass_Kg;
MassESS_Kg = Np * Ns * BattCellMass_Kg
VehMass_Kg = MassChassis_Kg + MassESS_Kg
% battery management system
MaxDisRate_C = 3;   % 3C discharge
MaxChgRate_C = 1;   % 1C charge
MaxDisCurr_A = MaxDisRate_C * BattMaxChrg_Ah * Np;
MaxChgCurr_A = - MaxChgRate_C * BattMaxChrg_Ah * Np;
MaxDisPow_W = LUTBattOCV_V(end) * Ns * MaxDisCurr_A;
MaxChgPow_W = LUTBattOCV_V(end) * Ns * MaxChgCurr_A;
% motor model
MotMaxTrq_Nm = 280; % default : 280 Nm
MotMaxPow_W = MaxDisPow_W; % default : 80 kW

% set parameters to BMS model workspace
ctrl_mdl_wrks.DataSource = 'MAT-File';
ctrl_mdl_wrks.FileName = 'CtrlParams';
ctrl_mdl_wrks.assignin('BattDischrgMax', MaxDisPow_W);
ctrl_mdl_wrks.assignin('BattChrgMax', MaxChgPow_W);
ctrl_mdl_wrks.saveToSource;
ctrl_mdl_wrks.reload;
% set parameters to chassis model workspace
chass_mdl_wrks.DataSource = 'MAT-File';
chass_mdl_wrks.FileName = 'ChassisParams';
chass_mdl_wrks.assignin('Mass', VehMass_Kg);
chass_mdl_wrks.saveToSource;
chass_mdl_wrks.reload;
% set parameters to battery model workspace
batt_mdl_wrks.DataSource = 'MAT-File';
batt_mdl_wrks.FileName = 'EVBattParams';
batt_mdl_wrks.assignin('Np', Np);
batt_mdl_wrks.assignin('Ns', Ns);
batt_mdl_wrks.saveToSource;
batt_mdl_wrks.reload;

% Adaptive Cruise Control
UseAdaptiveCruiseControl_bool = 0;
ACC_Kp = 0.05;
ACC_Ki = 0.001;
ACC_Kd = 0.05;
ACC_Nf = 10;
ACC_Tgap_s = 2;
ACC_Dgap_m = 15;
Kp = 30;
Kp_step = 0.005;
CarL = 7;

% run model
sim(model_hdl);

% get results
time = logsout{1}.Values.get('time');

% battery energy consumption
BattAmpHr = logsout{8}.Values.BattAmpHr.get('Data');
BattV = logsout{8}.Values.BattV.get('Data');
Batt_Whr = BattAmpHr .* BattV;
BattConsp_Whr = Batt_Whr(1) - Batt_Whr(end);

% total drive distance
VehDis_Mi = logsout{9}.Values.get('data');
VehDisTotal_Mi = VehDis_Mi(end);

% overall electrical energy efficiency
ElecEff_WhrPMi = BattConsp_Whr / VehDisTotal_Mi

% leave some reserve fraction of energy out of range calculation
BattRsrvFrac = 0.15;
% estimate max vehicle range
VehRngTheo_Mi = BattEnrgMax_Whr / ElecEff_WhrPMi * (1 - BattRsrvFrac)