clear
close all
clc

global stop_time step_time;
stop_time=30;
step_time=0.01;

global Exp_Lamda R;
Exp_Lamda=7.9;
R=38.5;

global init_x0;
init_x0=[0,8]';

global Jr ng Jg rho Kr Kg B Jt Kt;
Jr=4*10^6;
ng=60;
Jg=90;
rho=1.25;
Kr=6*10^5;
Kg=89.23;
B=0.0012; %%%%%%%
Jt=Jr+ng^2*Jg;
Kt=Kr+ng^2*Kg;

global C1 C2 C3 C4 C5;
C1=0.22;
C2=116;
C3=0.4;
C4=5;
C5=-12.5;

global mean_wind;
mean_wind=10;

alpha=0.2; %执行器参数确定值

global beta  mu;
beta=0;
mu=1;

global K1 K2 K3
K1=-B;
K2=-2*10^7;
K3=-1;
global Ta;
Ta=0;
sim('main.mdl')
%plot(Eomega)
figure(1)
plot(Eomega)
xlabel('时间(秒)')
ylabel('转速偏差')
xlim([ 0 stop_time/step_time])
set(gca,'xtick',[0:10/step_time:stop_time/step_time])
set(gca,'xticklabel',[0:10:stop_time])

figure(2)
plot(Pa)
xlabel('时间(秒)')
ylabel('输出功率')
xlim([ 0 stop_time/step_time])
set(gca,'xtick',[0:10/step_time:stop_time/step_time])
set(gca,'xticklabel',[0:10:stop_time])

figure(3)
plot(Omega)
xlabel('时间(秒)')
ylabel('风轮转速（弧度/秒）')
xlim([ 0 stop_time/step_time])
set(gca,'xtick',[0:10/step_time:stop_time/step_time])
set(gca,'xticklabel',[0:10:stop_time])




figure(5)
plot(wind1)
xlabel('时间(秒)')
ylabel('风速（米/秒）')
xlim([ 0 stop_time/step_time])
set(gca,'xtick',[0:10/step_time:stop_time/step_time])
set(gca,'xticklabel',[0:10:stop_time])
