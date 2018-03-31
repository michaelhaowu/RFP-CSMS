% Consumption calculation
clc
clear workspace

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
Tgap_s = 10;
CarL = 7;

%Set save parameters
BattConsp_WhPMi = [];
AveMotEff = [];
EnrgLossTotal_Wh = [];
BattConspACC_WhPMi = zeros(Tgap_s,CarL);
AveMotEffACC = zeros(Tgap_s,CarL);
EnrgLossTotalACC_Wh = zeros(Tgap_s,CarL);

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
UseAdaptiveCruiseControl_bool = 0;
sim(model_hdl); 

time = logsout{1}.Values.get('time');

BattPwr_W = logsout{8}.Values.BattPwr.get('data');
MotTrq_Nm = logsout{8}.Values.MotTrq.get('data');
MotTrq_RadPS = logsout{7}.Values.MotSpd.get('data');
MotPwr_W = logsout{8}.Values.MotPwr.get('data');
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

BattAmpHr = logsout{8}.Values.BattAmpHr;
BattV = logsout{8}.Values.BattV;

Batt_Whr = BattAmpHr.get('Data') .* BattV.get('Data'); 
BattConsp_Whr = Batt_Whr(1) - Batt_Whr(end);

%Vehicle performance
VehDis_Mi = logsout{9}.Values;
VehDisTotal_Mi = VehDis_Mi.get('data');
VehDisTotal_Mi = VehDisTotal_Mi(end);

PwrLoss_W = logsout{8}.Values.PwrLoss.get('data');
EnrgLoss_Wh = logsout{8}.Values.EngLossWhr.get('data');

BattConsp_WhPMi(ind) = BattConsp_Whr./ VehDisTotal_Mi;
AveMotEff(ind) = mean(MotEff_Pct);
EnrgLossTotal_Wh(ind) = EnrgLoss_Wh(end);

% Plot motor losses
figure(1);
subplot(3,1,1);
plot(time,MotPwr_W)
hold on

subplot(3,1,2);
plot(time,PwrLoss_W)
hold on

subplot(3,1,3);
plot(time,MotEff_Pct)
hold on

%% Plots
% Plot motor eff zones
figure(2);
size = 2;
scatter(MotTrq_RPM, MotTrq_Nm, size);
hold on

ind = ind+1;
%ACC Optimization
UseAdaptiveCruiseControl_bool = 1;
for ACC_Tgap_s = 1:Tgap_s
    for ACC_Dgap_CarL = 1:CarL
        ACC_Dgap_m = ACC_Dgap_CarL * 5;

        %Run model
        sim(model_hdl); 

        time = logsout{1}.Values.get('time');

        BattPwr_W = logsout{8}.Values.BattPwr.get('data');
        MotTrq_Nm = logsout{8}.Values.MotTrq.get('data');
        MotTrq_RadPS = logsout{7}.Values.MotSpd.get('data');
        MotPwr_W = logsout{8}.Values.MotPwr.get('data');
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

        BattAmpHr = logsout{8}.Values.BattAmpHr;
        BattV = logsout{8}.Values.BattV;

        Batt_Whr = BattAmpHr.get('Data') .* BattV.get('Data'); 
        BattConsp_Whr = Batt_Whr(1) - Batt_Whr(end);

        %Vehicle performance
        VehDis_Mi = logsout{9}.Values;
        VehDisTotal_Mi = VehDis_Mi.get('data');
        VehDisTotal_Mi = VehDisTotal_Mi(end);

        PwrLoss_W = logsout{8}.Values.PwrLoss.get('data');
        EnrgLoss_Wh = logsout{8}.Values.EngLossWhr.get('data');

        BattConspACC_WhPMi(ACC_Tgap_s, ACC_Dgap_CarL) = BattConsp_Whr./ VehDisTotal_Mi;
        AveMotEffACC(ACC_Tgap_s, ACC_Dgap_CarL) = mean(MotEff_Pct);
        EnrgLossTotalACC_Wh(ACC_Tgap_s, ACC_Dgap_CarL) = EnrgLoss_Wh(end);

        % Plot motor losses
        if (ACC_Dgap_CarL == 3 && ACC_Tgap_s == 2) || (ACC_Dgap_CarL == 5 && ACC_Tgap_s == 5)
            figure(1);
            subplot(3,1,1);
            plot(time,MotPwr_W)
            hold on

            subplot(3,1,2);
            plot(time,PwrLoss_W)
            hold on

            subplot(3,1,3);
            plot(time,MotEff_Pct)
            hold on

            %% Plots
            % Plot motor eff zones
            figure(2);
            size = 2;
            scatter(MotTrq_RPM, MotTrq_Nm, size);
            hold on
        end
        ind = ind+1;
    end
end

% %% Plots
% % Plot motor eff zones
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


% Plot motor losses
figure(1);
subplot(3,1,1);
legend('MotPwr Driver (W)', 'MotPwr ACC (W)', 'MotPwr ACC Mod(W)')

subplot(3,1,2);
legend('PwrLoss Driver(W)', 'PwrLoss ACC (W)', 'PwrLoss ACC Mod (W)')

subplot(3,1,3);
legend('MotEff Driver (%)', 'MotEff ACC (%)', 'MotEff ACC Mod(%)')

%Plot trace regions
figure(2);
legend('Mot Operation Driver', 'Mot Operation ACC', 'Mot Operation ACC Mod')
cmap1 = colormap; 
cmap1 = flipud(cmap1);
colormap(cmap1)
[C, h] = contour(MotGenEffSpd_RPM, MotGenEffTrq_Nm, MotGenEff_Pct');
clabel(C,h);
[C, h] = contour(MotGenEffSpd_RPM, -1.*MotGenEffTrq_Nm, MotGenEff_Pct');
clabel(C,h);
colorbar

BattConsp_WhPMi
AveMotEff
EnrgLossTotal_Wh

BattConspACC_WhPMi
AveMotEffACC
EnrgLossTotalACC_Wh