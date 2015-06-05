clear
close all
clc

global stop_time step_time;
stop_time=0.2;
step_time=0.1;

global Exp_Lamda R;
%Exp_Lamda=8.7; %%最佳叶尖速比

Exp_Lamda=7.9
R=38.5;

global max_P
max_P=1.5*10^6;

global C_Num C_Den;
C_Num=[1];   %省略
C_Den=[0 1]; %省略


global init_x0;
init_x0=[0,1,1]';

global Jr ng Jg rho Kr Kg c0;
Jr=4*10^6;
ng=60;
Jg=90;
rho=1.25;
Kr=6*10^5;
Kg=89.23;
c0=20; %%%控制参数有条件

global C1 C2 C3 C4 C5;
C1=0.22;
C2=116;
C3=0.4;
C4=5;
C5=-12.5;

global mean_wind;
mean_wind=15;

global ctrlpara;
k=-0.1; %控制参数有条件

alpha=0.2; %执行器参数确定值
tmp=((Kr+ng^2*Kg)/(Jr+ng^2*Jg)+k)/alpha;
ctrlpara=[1/alpha tmp 0]; %%%%%%% 控制器参数，无可调量
%ctrlpara=[1 0 0.2];

global beta;
beta=0;
global pre_e sum_e;
pre_e=0;
sum_e=0;

global ctrl_flag;
ctrl_flag=1;

sim('untitlednew.mdl')
% figure(1)
% plot(TT,EE)
% xlabel('时间(秒)')
% ylabel('风轮转速误差（弧度/秒）')

figure(1)
plot(TT,YY2)
xlabel('时间(秒)')
ylabel('风速')


figure(2)
plot(TT,YY)
xlabel('时间(秒)')
ylabel('风轮转速（弧度/秒）')


figure(3)
plot(TT,YY1)
xlabel('时间(秒)')
ylabel('输出功率')
% figure(3)
% RE=EE./Omega;
% plot(TT,RE*100)
% xlabel('时间(秒)')
% ylabel('风轮转速相对误差（%）')

% J1=RE'*RE*step_time
% J2=max(abs(EE))
% J2=max(abs(EE(round(end/2+1),end)))
