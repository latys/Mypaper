%%姿态运动微分方程
function [sys,x0,str,ts]=MyZ(t,x,u,flag)

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
sizes.NumContStates  =3;  %%
sizes.NumDiscStates  = 0;  %%
sizes.NumOutputs     = 1;  %%
sizes.NumInputs      = 1;  %%
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 0;

sys=simsizes(sizes);
global init_z;  %%
x0=init_z;      %%
str=[];
ts=[];

function sys=mdlDerivatives(t,x,u)

global L;
lamda1=1.1;
lamda2=1.5;
lamda3=2;



v0=x(2)-lamda3*abs(L)^(1/3)*abs(x(1)-u)^(2/3)*sign(x(1)-u);
v1=x(3)-lamda2*L^(1/2)*abs(x(2)-v0)^(1/2)*sign(x(2)-v0);

sys(1)=x(2)-lamda3*abs(L)^(1/3)*abs(x(1)-u)^(2/3)*sign(x(1)-u)
sys(2)=x(3)-lamda2*L^(1/2)*abs(x(2)-v0)^(1/2)*sign(x(2)-v0)
sys(3)=-lamda1*L*sign(x(3)-v1)






function sys=mdlOutputs(t,x,u)
global k ek;
k
ek
z0=x(1)
z1=x(2)
z2=x(3)

sys(1)=k*(z2+2*(abs(z1)+abs(z0)^(2/3))^(-1/2)*(z1+abs(z0)^(2/3)*sign(z0)))/(abs(z2)+2*(abs(z1)+abs(z0)^(2/3))^(1/2)+ek) %%

