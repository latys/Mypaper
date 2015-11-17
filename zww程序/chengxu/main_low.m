clear
close all
clc

global C R rho rate_omega;
C=1.5e6;%额定功率
R=38.5;
rho=1.225;
rate_omega=1.9;
%风轮模块
global C1 C2 C3 C4 C5 C6;
C1=0.5576;
C2=116;
C3=0.4;
C4=5;
C5=-21;
C6=0.0068;
%传动链模块
global Jr ng Jg Kr Kg c0 Jt Kt;
Jr=3.28e5;
Jg=97.5;
ng=75.76;
Jt=Jr+ng^2*Jg;
Kr=270.36;
Kg=0.2;
Kt=Kr+ng^2*Kg;
c0=119; %%%控制参数有条件c0+beta./beta>0

global Exp_Lamda Exp_Cp;
Exp_Lamda=6.3; %%最佳叶尖速比
Exp_Cp=0.43;
%kopt=0.6527;

global max_P;
max_P=1.5e6;

%控制器参数
global ctrlpara;
kg=-8.86e5;%控制参数有条件（满足k<a2/a1）
alpha=0.4; %执行器参数确定值
tmp=(Kt/Jt-1/Jt)/(alpha);
ctrlpara=-[Jt/(alpha);(Kt-kg)/(alpha);0]; %%%%%%% 控制器参数，无可调量
%风速采集
 v=repmat(12.5,[1,1000]);

sim('lowwind.mdl')
figure(1)
plot(TT,TT6,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风速 / m·s-1')
grid
figure(2)
plot(TT,TT3,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风能利用系数')
grid
figure(3)
plot(TT,TT2,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风轮转速 / rad·s-1')
grid
figure(4)
plot(TT,TT5,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风电机组输出功率 / W')
grid
figure(5)
plot(TT,TT4,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('发电机输出转矩 /N.m')
grid

%  fadianjishuchuzhuanju9Mu06=TT4;
% fengdianjishuchugonglv9Mu06=TT5;
% fenglunzhuansu9Mu06=TT2;
% fengnengliyongxishu9Mu06=TT3;
% save('fadianjishuchuzhuanju9Mu06','fadianjishuchuzhuanju9Mu06')
% save('fengdianjishuchugonglv9Mu06','fengdianjishuchugonglv9Mu06')
% save('fenglunzhuansu9Mu06','fenglunzhuansu9Mu06')
%  save('fengnengliyongxishu9Mu06','fengnengliyongxishu9Mu06')