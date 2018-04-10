% Consumption calculation
clc
clear workspace
Simulink.sdi.clear

% Model references
model_hdl = 'EvReferenceApplication';
battev_hdl = 'BattEV';
motgen_hdl = 'MotGenEvMapped';
ess_model_hdl = strcat(string(model_hdl), '/Passenger Car/Electric Plant/Battery');

%Set model parameters
UseAdaptiveCruiseControl_bool = 0;
ACC_Kp = 0.05;
ACC_Ki = 0.001;
ACC_Kd = 0.05;
ACC_Nf = 10;
ACC_Tgap_s = 2;
ACC_Dgap_m = 15;
%Use this to enable disable regen
RegenEna = 1;
MotMaxTrq_Nm = 280; % default : 280 Nm
MotMaxPow_W = 80000; % default : 80 kW
N_dif = 7.94;

%Set save parameters
BattConsp_WhPMi = [];
BattRegEnrgyTotal_Wh =  [];
% AveMotEff = [];
% EnrgLossTotal_Wh = [];

%Compute consumptions numbers
ess_mdl_wrks = get_param(battev_hdl,'ModelWorkspace') ;
motgen_mdl_wrks = get_param(motgen_hdl,'ModelWorkspace') ;

%Motor eff
MotGenEff_Pct = getVariable(motgen_mdl_wrks,'efficiency_table');
MotGenEffSpd_RadPS = getVariable(motgen_mdl_wrks,'w_eff_bp').*pi/30;
MotGenEffTrq_Nm = getVariable(motgen_mdl_wrks,'T_eff_bp');
MotGenEffSpd_RPM = getVariable(motgen_mdl_wrks,'w_eff_bp');

%Run Model
sim(model_hdl); 

time = logsout{2}.Values.get('time');

%Battery regen energy
BattPwr_W = logsout{9}.Values.BattPwr.get('data');
BattAmpHr = logsout{9}.Values.BattAmpHr.get('data');
BattV = logsout{9}.Values.BattV.get('data');
BattCrnt_A = logsout{9}.Values.BattCrnt.get('data');

BattRegCrnt_A = BattCrnt_A;
BattRegCrnt_A(BattRegCrnt_A >0)=0;
BattRegPwr_W = BattRegCrnt_A.*BattV;

BattRegCrnt_A = BattCrnt_A;
BattRegCrnt_A(BattRegCrnt_A >0)=0;
BattDisCrnt_A = BattCrnt_A;
BattDisCrnt_A(BattDisCrnt_A <0)=0;
BattRegPwr_W = BattRegCrnt_A.*BattV;
BattDisPwr_W = BattDisCrnt_A.*BattV;

BattRegEnrgy_Wh = trapz(time,BattRegPwr_W)/3600;
BattDisEnrgy_Wh = trapz(time,BattDisPwr_W)/3600;
BattRegEnrgyTotal_Wh = -1.*BattRegEnrgy_Wh(end)/n
BattDisEnrgyTotal_Wh = BattDisEnrgy_Wh(end)/n

%Vehicle performance
VehDis_Mi = logsout{10}.Values;
VehDisTotal_Mi = VehDis_Mi.get('data');
VehDisTotal_Mi = VehDisTotal_Mi(end);
VehSpd_mps = logsout{8}.Values.xdot.get('data');
VehSpdNeg_mps = VehSpd_mps;
VehAccel_mps2 = diff(VehSpd_mps);

for i = 2:length(VehSpd_mps)
   if  VehAccel_mps2(i-1) >= 0 
       VehSpdNeg_mps(i) = 0;
   end
end

VehDecelDis_mi = trapz(time,VehSpdNeg_mps./1609.34)
PwrLoss_W = logsout{9}.Values.PwrLoss.get('data');
EnrgLoss_Wh = logsout{9}.Values.EngLossWhr.get('data');

BattConspInt_Whr =  trapz(time, BattCrnt_A.* BattV)/3600;
BattConsp_WhPMi = BattConspInt_Whr./ VehDisTotal_Mi
% EnrgLossTotal_Wh= EnrgLoss_Wh(end)
% BattRegEnrgyTotal_Wh = -1.*BattRegEnrgy_Wh(end)

%Motor regen utility
MotTrqCmdRegen_Nm = logsout{1}.Values.MotTrqCmdRegen.get('data')*N_dif;

BrakeCmd_Pa = logsout{1}.Values.BrakeCmd.get('data');
MotTrqMax_Nm = logsout{1}.Values.MotTrqMax.get('data');
BrkFricTrq_Nm = logsout{1}.Values.BrkFricTrq.get('data').*-1;

for i = 1:length(BrkFricTrq_Nm)
    if VehSpd_mps(i) < 0.1
        BrkFricTrq_Nm(i) = 0;
    end
end

MotTrqRegen_Pct = logsout{1}.Values.MotTrqCmdRegen;
MotTrqRegenTotal = BrkFricTrq_Nm + MotTrqCmdRegen_Nm;
set(MotTrqRegen_Pct,'data', MotTrqCmdRegen_Nm./MotTrqRegenTotal.*100);

AveMotRegen_Pct = mean(MotTrqRegen_Pct)

MotSpd = logsout{8}.Values.MotSpd.get('data');
BrkPwr_W = MotTrqRegenTotal.*MotSpd./N_dif;
BrkEnrgy_Wh = trapz(time, BrkPwr_W)/3600

figure 
plot(time,MotTrqRegenTotal)
hold on
plot(time,MotTrqCmdRegen_Nm)
% plot(time,MotTrqMax_Nm*-1*N_dif)

% %% Plots
% % Plot motor losses
% figure(1);
% subplot(3,1,1);
% plot(time,MotPwr_W)
% hold on
% 
% subplot(3,1,2);
% plot(time,PwrLoss_W)
% hold on
% 
% subplot(3,1,3);
% plot(time,MotEff_Pct)
% hold on
% 
% %% Plots
% % Plot motor eff zones
% figure(2);
% size = 2;
% scatter(MotTrq_RPM, MotTrq_Nm, size);
% hold on
% % Plot motor losses
% figure(1);
% subplot(3,1,1);
% legend('Driver ', 'ACC', 'ACC Mod')
% ylabel('Motor Power (W)');
% 
% subplot(3,1,2);
% legend('Driver ', 'ACC', 'ACC Mod')
% ylabel('Power Loss (W)');
% 
% subplot(3,1,3);
% legend('Driver ', 'ACC', 'ACC Mod')
% xlabel('Time (s)');
% ylabel('Motor Efficiency (%)');
% 
% %Plot trace regions
% figure(2);
% legend('Mot Operation Driver', 'Mot Operation ACC', 'Mot Operation ACC Mod')
% cmap1 = colormap; 
% cmap1 = flipud(cmap1);
% colormap(cmap1)
% [C, h] = contour(MotGenEffSpd_RPM, MotGenEffTrq_Nm, MotGenEff_Pct');
% clabel(C,h);
% [C, h] = contour(MotGenEffSpd_RPM, -1.*MotGenEffTrq_Nm, MotGenEff_Pct');
% clabel(C,h);
% colorbar
% xlabel('Motor Speed (RPM)');
% ylabel('Motor Torque (Nm)');