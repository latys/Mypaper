%%姿态运动微分方程
function [sys,x0,str,ts]=Myplant1(t,x,u,flag)

switch flag,
%Initialization
  case 0,
    [sys,x0,str,ts]=mdlInitializeSizes;
case 1,
    sys=mdlDerivatives(t,x,u);
%Outputs
  case 3,
    sys=mdlOutputs(t,x,u);
%Unhandled flags
  case {2, 4, 9 }
    sys = [];
%Unexpected flags
  otherwise
    error(['Unhandled flag = ',num2str(flag)]);
end

%mdlInitializeSizes


function [sys,x0,str,ts]=mdlInitializeSizes
sizes = simsizes;
sizes.NumContStates  =4;  %%
sizes.NumDiscStates  = 0;  %%
sizes.NumOutputs     = 3;  %%
sizes.NumInputs      = 2;  %%
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 0;

sys=simsizes(sizes);
global init_x0;  %%
x0=init_x0;      %%
str=[];
ts=[];

function sys=mdlDerivatives(t,x,u)
global Jr ng Jg rho Kr Kg B Jt Kt;
global C1 C2 C3 C4 C5 C6;
global R;
global beta mu;
global Ta;

global Kls Dr Dls Dg

1
v=u(1);
Te=u(2);
theta_r=x(1)
omega_r=x(2);
theta_ls=x(3)
omega_g=x(4);

omega_ls=omega_r;

%theta_ls=theta_g/ng;

Lamda=omega_r*R/v;
if Lamda==0;
    Lamda=0.1;
end
Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
Cp=C1*(C2/Lamda_i-C3*beta-C4)*exp(-C5/Lamda_i)+C6*Lamda;
Ta=0.5*rho*pi*R^3*Cp*v^2/Lamda;
tmp1=(mu*Ta-Kt*x(2)-B*x(1)-Te)/Jt;

sys(1)=x(2);

sys(2)=(Ta-Kls*(theta_r-theta_ls)-Dls*(omega_r-omega_ls)-Dr*omega_r)/Jr;
sys(3)=omega_r;

sys(4)=(-Te*ng+Kls*(theta_r-theta_ls)+Dls*(omega_r-omega_ls)-Dg*ng*omega_g)/(Jg*ng);




function sys=mdlOutputs(t,x,u)
global Ta;
sys(1)=x(2); %%
sys(2)=x(4); %%
sys(3)=Ta;




