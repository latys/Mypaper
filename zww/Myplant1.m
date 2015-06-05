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
sizes.NumContStates  = 3;  %%
sizes.NumDiscStates  = 0;  %%
sizes.NumOutputs     = 4;  %%
sizes.NumInputs      = 2;  %%
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 0;

sys=simsizes(sizes);
global init_x0;  %%
x0=init_x0;      %%
str=[];
ts=[];

function sys=mdlDerivatives(t,x,u)
global Jr ng Jg rho Kr Kg c0;
global C1 C2 C3 C4 C5;
global R
global max_P
global K1 K2 K3;
global Ta;

K1=-0.0026;
K2=--20000;


beta=2;
v=u(1);
omega=x(2)

Lamda=omega*R/v;
Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
Cp=C1*(C2/Lamda_i-C3*beta-C4)*exp(C5/Lamda_i);
%Ta=0.5*rho*pi*R^3*Cp*u(2)^2/Lamda;
v
Ta=1/2*rho*pi*R^3*(-0.0026*omega^2*R^2+0.0372*omega*R*v-0.0678*v^2)

Jt=Jr+ng^2*Jg;
Kt=Kr+ng^2*Kg;
K3=-Jt
tmp1=(Ta-Kt*x(2)-x(3))/Jt;


sys(1)=x(2);
sys(2)=tmp1;
sys(3)=-x(3)+u(2);
if u(2)<3
    Exp_P=0;
elseif u(2)>25
    Exp_P=max_P;
else
    Exp_P=23437*u(2)^2+140625*u(2)+210933;%%%%？？？
end

tmp2=Exp_P-x(1)*x(2);
%sys(2)=1/x(1)*(c0*tmp2-x(2)*tmp1);

%sys=u;

function sys=mdlOutputs(t,x,u)


sys(1)=x(2); %%
sys(2)=x(1); %%
sys(3)=x(2); %%
sys(4)=x(3); %%

