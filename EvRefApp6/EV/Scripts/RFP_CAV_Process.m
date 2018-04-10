% Consumption calculation
% clc
clear workspace

% Model references
model_hdl = 'EvReferenceApplication';
battev_hdl = 'BattEV';
motgen_hdl = 'MotGenEvMapped';
ess_model_hdl = strcat(string(model_hdl), '/Passenger Car/Electric Plant/Battery');

%Set model parameters
ACC_Kp = 0.1;
ACC_Ki = 0.001;
ACC_Kd = 0.05;
ACC_Nf = 10;
ACC_Tgap_s = 2;
ACC_Dgap_m = 2;
Kp = 30;
Kp_step = 0.005;
CarL = 7;
MotMaxTrq_Nm = 280; % default : 280 Nm
MotMaxPow_W = 80000; % default : 80 kW
n = 1;

%Set save parameters
BattConspInt_Whr = [];
AveMotEff = []; 
EnrgLossTotal_Wh = [];
BattConspACC_WhPMi = zeros(Kp,CarL);
AveMotEffACC = zeros(Kp,CarL);
EnrgLossTotalACC_Wh = zeros(Kp,CarL);

%Compute consumptions numbers
ess_mdl_wrks = get_param(battev_hdl,'ModelWorkspace') ;
motgen_mdl_wrks = get_param(motgen_hdl,'ModelWorkspace') ;

%Motor eff
MotGenEff_Pct = getVariable(motgen_mdl_wrks,'efficiency_table');
MotGenEffSpd_RadPS = getVariable(motgen_mdl_wrks,'w_eff_bp').*pi/30;
MotGenEffTrq_Nm = getVariable(motgen_mdl_wrks,'T_eff_bp');
MotGenEffSpd_RPM = getVariable(motgen_mdl_wrks,'w_eff_bp');

ind = 1;

%Non ACC
UseAdaptiveCruiseControl_bool = 1;
sim(model_hdl); 

time = logsout{2}.Values.get('time');

BattPwr_W = logsout{9}.Values.BattPwr.get('data');
MotTrq_Nm = logsout{9}.Values.MotTrq.get('data');
MotTrq_RadPS = logsout{8}.Values.MotSpd.get('data');
MotPwr_W = logsout{9}.Values.MotPwr.get('data');
MotTrq_RPM = MotTrq_RadPS .* 30 ./ pi;

MotEff_Pct = MotPwr_W;

for i = 1: length(MotPwr_W)
    if MotPwr_W(i) >= 0
        MotEff_Pct(i) = MotPwr_W(i) ./ BattPwr_W(i) .*100;
    elseif MotPwr_W(i) < 0
        MotEff_Pct(i) = BattPwr_W(i) ./ MotPwr_W(i) .*100;
    end

    if isnan(MotEff_Pct(i))
        MotEff_Pct(i) = 0;
    elseif MotEff_Pct(i) >= 100
        MotEff_Pct(i) = 1/MotEff_Pct(i);
    end

    if MotEff_Pct(i) >= 100
         MotEff_Pct(i) = 100;
    elseif MotEff_Pct(i) < 0
         MotEff_Pct(i) = 0;
    end
end 

MotPwrLoss_W = BattPwr_W - MotPwr_W;

%Battery consumption
BattChargeMax_Ah = getVariable(ess_mdl_wrks, 'BattChargeMax');
BattCapInit_Ah = getVariable(ess_mdl_wrks, 'BattCapInit');

BattAmpHr = logsout{9}.Values.BattAmpHr.get('Data');
BattV = logsout{9}.Values.BattV.get('Data');
BattCrnt_A = logsout{9}.Values.BattCrnt.get('data');

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

PwrLoss_W = logsout{9}.Values.PwrLoss.get('data');
EnrgLoss_Wh = logsout{9}.Values.EngLossWhr.get('data');

Batt_Whr = BattAmpHr .* BattV; 
BattConspInt_Whr =  trapz(time, BattCrnt_A.* BattV)/3600;
BattConsp_WhPMi = BattConspInt_Whr ./ VehDisTotal_Mi

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

AveMotRegen_Pct = mean(MotTrqRegen_Pct);
MotEff_PctF = MotEff_Pct;
MotEff_PctF(MotEff_PctF<0.005) = [];
AveMotEff(ind) = mean(MotEff_PctF);
EnrgLossTotal_Wh(ind) = EnrgLoss_Wh(end);

index = find(time == 500);
BattRegEnrgyZ_Wh = -1.*trapz(time(index:end),BattRegPwr_W(index:end))/3600;
BattDisEnrgyZ_Wh = trapz(time(index:end),BattDisPwr_W(index:end))/3600;

% figure(1);
% plot(time,MotPwr_W)
% hold on
% ylabel('Motor Power (W)');
% xlabel('Time (s)');
% 
% figure(2)
% plot(time, BattCrnt_A)
% 
% figure(3)
% plot(time, BattAmpHr)

% 
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

% %% Plots
% % Plot motor eff zones
% figure(2);
% size = 2;
% scatter(MotTrq_RPM, MotTrq_Nm, size);
% hold on
% 
% ind = ind+1;
% %ACC Optimization
% UseAdaptiveCruiseControl_bool = 1;
% for ACC_Kp_i = 1:Kp
%     ACC_Kp = ACC_Kp_i*Kp_step;
%     for ACC_Dgap_CarL = 1:CarL
%         ACC_Dgap_m = ACC_Dgap_CarL * 5;
% 
%         %Run model
%         sim(model_hdl); 
% 
%         time = logsout{2}.Values.get('time');
% 
%         BattPwr_W = logsout{9}.Values.BattPwr.get('data');
%         MotTrq_Nm = logsout{9}.Values.MotTrq.get('data');
%         MotTrq_RadPS = logsout{8}.Values.MotSpd.get('data');
%         MotPwr_W = logsout{9}.Values.MotPwr.get('data');
%         MotTrq_RPM = MotTrq_RadPS .* 30 ./ pi;
% 
%         MotEff_Pct = MotPwr_W;
% 
%         for i = 1: length(MotPwr_W)
%             if MotPwr_W(i) >= 0
%                 MotEff_Pct(i) = MotPwr_W(i) ./ BattPwr_W(i) .*100;
%             elseif MotPwr_W(i) < 0
%                 MotEff_Pct(i) = BattPwr_W(i) ./ MotPwr_W(i) .*100;
%             end
% 
%             if isnan(MotEff_Pct(i))
%                 MotEff_Pct(i) = 0;
%             elseif MotEff_Pct(i) >= 100
%                 MotEff_Pct(i) = 1/MotEff_Pct(i);
%             end
% 
%             if MotEff_Pct(i) >= 100
%                  MotEff_Pct(i) = 100;
%             elseif MotEff_Pct(i) < 0
%                  MotEff_Pct(i) = 0;
%             end
%         end 
% 
%         MotPwrLoss_W = BattPwr_W - MotPwr_W;
% 
%         %Battery consumption
%         BattChargeMax_Ah = getVariable(ess_mdl_wrks, 'BattChargeMax');
%         BattCapInit_Ah = getVariable(ess_mdl_wrks, 'BattCapInit');
% 
%         BattAmpHr = logsout{9}.Values.BattAmpHr;
%         BattV = logsout{9}.Values.BattV;
% 
%         Batt_Whr = BattAmpHr.get('Data') .* BattV.get('Data'); 
%         BattConsp_Whr = trapz(BattAmpHr.get('Data'), BattV.get('Data'));
% 
%         %Vehicle performance
%         VehDis_Mi = logsout{10}.Values;
%         VehDisTotal_Mi = VehDis_Mi.get('data');
%         VehDisTotal_Mi = VehDisTotal_Mi(end);
% 
%         PwrLoss_W = logsout{9}.Values.PwrLoss.get('data');
%         EnrgLoss_Wh = logsout{9}.Values.EngLossWhr.get('data');
% 
%         BattConspACC_WhPMi(ACC_Kp_i, ACC_Dgap_CarL) = BattConsp_Whr./ VehDisTotal_Mi;
%         AveMotEffACC(ACC_Kp_i, ACC_Dgap_CarL) =     mean(MotEff_Pct);
%         EnrgLossTotalACC_Wh(ACC_Kp_i, ACC_Dgap_CarL) = EnrgLoss_Wh(end);
% 
%         % Plot motor losses
%         if (ACC_Dgap_CarL == 3 && ACC_Kp_i == 10) || (ACC_Kp_i == 8 && ACC_Dgap_CarL == 5)
%             figure(1);
%             subplot(3,1,1);
%             plot(time,MotPwr_W)
%             hold on
% 
%             subplot(3,1,2);
%             plot(time,PwrLoss_W)
%             hold on
% 
%             subplot(3,1,3);
%             plot(time,MotEff_Pct)
%             hold on
% 
%             %% Plots
%             % Plot motor eff zones
%             figure(2);
%             size = 2;
%             scatter(MotTrq_RPM, MotTrq_Nm, size);
%             hold on
%         end
%         ind = ind+1;
%     end
% end
% 
% % Plots
% Plot motor eff zones
% fig2 = figure(2);
% cmap1 = colormap; 
% cmap1 = flipud(cmap1);
% colormap(cmap1)
% [C, h] = contour(MotGenEffSpd_RadPS, MotGenEffTrq_Nm, MotGenEff_Pct');
% clabel(C,h);
% hold on
% [C, h] = contour(MotGenEffSpd_RadPS, -1.*MotGenEffTrq_Nm, MotGenEff_Pct');
% clabel(C,h);
% size = 2;
% MotEff_Pct_plot = MotEff_Pct;
% MotEff_Pct_plot(MotEff_Pct_plot<=80) = 80;
% scatter(MotTrq_RadPS, MotTrq_Nm, size, MotEff_Pct_plot);
% colorbar
% xlabel('Motor Speed (RPM)');
% ylabel('Motor Torque (Nm)');
% 
% Plot motor losses


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
% 
% %Plot ACC Optimization
% figure(3)
% x = (1:Kp)*Kp_step;
% [C, h] = contourf(x, 1:CarL, AveMotEffACC');
% clabel(C,h);
% xlabel('ACC Kp');
% ylabel('Car Length Gap');
% c = colorbar;
% c.Label.String = 'Average Motor Efficiency (%)';
% % xlim([0 0.02])

% 
% BattConsp_WhPMi_Int
% AveMotEff
% EnrgLossTotal_Wh
% 
% BattConspACC_WhPMi
% AveMotEffACC
% EnrgLossTotalACC_Wh