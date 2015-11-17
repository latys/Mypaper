
clc

 

% load cp_cq;
% Ctorque=cq(2:5:102,2:5:182);
% for i=1:21
%     for j=1:37
%         if isnan(Ctorque(i,j))
%             Ctorque(i,j)=0;                        
%         end
%     end
% end
% clear cp_cq
% 
% global init_x0;
% 
% init_x0=[0 -1.9324e003 -223.194 3.8959e003];
% 
% global steptime tmpw 
% steptime=0.01;
% tmpw=0;

global R ro_air Jr Jg K v c1 c2 c3 c4 c5 c6 C h K1 K2

%额定功率
C=1.5e6;

%风速模块

global basic_V;
basic_V=19;

global Vgmax t1 tg Vcmax t1_1 t2_1 t_1 Vnmax omega_v;
Vgmax=1;
t1=0;
tg=20;
Vcmax=1;
t1_1=0;
t2_1=10;
t_1=10;
Vnmax=1;
omega_v=2*pi;

%风轮模块
c1=0.5176;
c2=116;
c3=0.4;
c4=5;
c5=21;
c6=0.0068;

R=38.5;
ro_air=1.225;
global Exp_Lamda R Exp_Cp;
Exp_Lamda=6.3; %%最佳叶尖速比
R=38.5;
Exp_Cp=0.436;

%传动链模块
Jg=97.5;
Jr=3.28e5;
K=75.76;
global Jt Kr Kg Kt c0
Jt=Jr+K^2*Jg;
Kr=270.36;
Kg=0.2;
Kt=Kr+K^2*Kg;
c0=119;

%发电机模块


global ctrlpara kbeta alphabeta;
kbeta=-0.9987;
alphabeta=5e-6; 
ctrlpara=-[1/(alphabeta);((Kt/Jt)-kbeta)/(alphabeta);0]; 

%加权值
h=0.67;

%风速采集
 v=repmat(12.5,[1,1000]);
 
 %控制器设计
 global ctrlapara kbeta1 alphabeta1;
kbeta1=-0.35;%控制参数有条件（满足k<a2/a1）
alphabeta1=0.33; %执行器参数确定值
ctrlapara=[1/(alphabeta1*rho*pi);((Kt/Jt)-kbeta1)/(alphabeta1*rho*pi);0]; 

sim('raodongLow.mdl'); 
figure(1)
plot(TT,TT1,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风速 / m·s-1')
grid
figure(2)
plot(TT,TT5,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风能利用系数')
grid
figure(3)
plot(TT,TT2,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风轮转速 / rad·s-1')
grid
figure(4)
plot(TT,TT6,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风电机组输出功率 / W')
grid
figure(5)
plot(TT,TT4,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('发电机输出转矩 /N.m')
grid
figure(6)
plot(TT,TT3,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('桨距角 /°')
grid
         
disp('end')
%  fengnengliyongxishu14Mu06=TT5;
% fenglunzhuansu14Mu06=TT2;
% fengdianjishuchugonglv14Mu06=TT6;
% fadianjishuchuzhuanju14Mu06=TT4;
% jiangjujiao14Mu06=TT3;
% 
% save('fengnengliyongxishu14Mu06','fengnengliyongxishu14Mu06');
% save('fenglunzhuansu14Mu06','fenglunzhuansu14Mu06');
% save('fengdianjishuchugonglv14Mu06','fengdianjishuchugonglv14Mu06');
% save('fadianjishuchuzhuanju14Mu06','fadianjishuchuzhuanju14Mu06');
% save('jiangjujiao14Mu06','jiangjujiao14Mu06');