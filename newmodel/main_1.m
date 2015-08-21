clear
close all
clc

global stop_time step_time;
stop_time=100;
step_time=0.1;

global Exp_Lamda R;
Exp_Lamda=8.1;
R=21.65;

global init_x0 init_z;
init_x0=[0,0.1,0,0.1]';
init_z=[0.1 0.1 0.1];

global L k ek;
L=400000;
k=100;
ek=0.0001;

global Jr ng Jg rho Kr Kg B Jt Kt;
Jr=3.25*10^5;
ng=43.165;
Jg=34.4;
rho=1.308;
Kr=6*10^5;
Kg=89.23;
B=0.0012; %%%%%%%
Jt=Jr+ng^2*Jg;
Kt=Kr+ng^2*Kg;

global C1 C2 C3 C4 C5 C6;
C1=0.5176;
C2=116;
C3=0.4;
C4=5;
C5=21;
C6=0.0068
global mean_wind;
mean_wind=5;

alpha=0.2; %执行器参数确定值

global beta  mu;
beta=0;
mu=1;

global Kls Dr Dls Dg;

Kls=9500
Dls=2.691*10^5;
Dr=27.36
Dg=0.2
global Ta;
Ta=0;

global K1 K2 K3
K1=-B;
K2=-4*10^6;
K3=0;
sim('main.mdl')
%plot(Eomega)
figure(1)
plot(Eomega)
xlabel('时间(秒)')
ylabel('转速偏差')

figure(2)
plot(Pa)
xlabel('时间(秒)')
ylabel('输出功率')

figure(3)
plot(Omega)
xlabel('时间(秒)')
ylabel('风轮转速（弧度/秒）')

figure(4)
plot(wind1)
xlabel('时间(秒)')
ylabel('风速（米/秒）')

