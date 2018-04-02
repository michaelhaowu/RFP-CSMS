% Optimization of parameters to achieve 200 mile range
clc
clear workspace

% Model references
model_hdl = 'EvReferenceApplication';
battev_hdl = 'BattEV';
motgen_hdl = 'MotGenEvMapped';
ess_model_hdl = strcat(string(model_hdl), '/Passenger Car/Electric Plant/Battery');

% set model parameters
% TODO: set drive cycle programmatically to US06
% for now user must set this manually from simulink
UseAdaptiveCruiseControl_bool = 0;
% motor model
MotMaxTrq_Nm = 300;
MotMaxPow_W = 90000;
% battery model
Np = 3;
Ns = 90; % these are parameters of current 6M15S3P pack
% BMS model
BattDischrgMax = ;  % W
BattChrgMax = ;     % W
% vehicle model
Mass = ;            % kg

% apply model parameters to mdl files
% get model workspaces
mot_mdl_wrks = get_param(motgen_hdl, 'ModelWorkspace');

% assign to motor model
assignin(mot_mdl_wrks, 'torque_max', MotMaxTrq_Nm);
assignin(mot_mdl_wrks, 'power_max', MotMaxPow_Nm);

% run model
sim(model_hdl);

% get results
time = logsout{1}.Values.get('time');

% battery energy consumption
BattAmpHr = logsout{8}.Values.BattAmpHr.get('Data');
BattV = logsout{8}.Values.BattV.get('Data');
Batt_Whr = BattAmpHr .* BattV;
BattConsp_Whr = BattWhr(1) - BattWhr(end);

% total drive distance
VehDis_Mi = logsout{9}.Values.get('data');
VehDisTotal_Mi = VehDis_Mi(end);

% overall electrical energy efficiency
ElecEff = BattConsp_Whr / VehDisTotal_Mi;


