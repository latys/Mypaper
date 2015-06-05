function output=Mywind(u)

T=600;
t=u(2)-floor(u(2)/T)*T;

Vgmax=1;
T1=0;
Tg=20;
Vcmax=1;
T1_1=0;
T2_1=10;
T_1=10;
Vnmax=1;
omega_v=2*pi;

V=u(1);

if t<T1
    Vg=0;
elseif t>T1+Tg
    Vg=0;
else
    Vg=(Vgmax/2)*(1-cos(2*pi*(t/Tg-T1/Tg)));
end

if t<T1_1 || t>T2_1+T_1
    Vc=0;
elseif t>=T1_1 & t<=T2_1
    Vc=Vcmax*(t-T1_1)/(T2_1-T1_1);
else
    Vc=Vcmax;
end

Vn=Vnmax*2*(rand(1)-0.5)*cos(omega_v+2*pi*rand(1));

output=V+Vg+Vc+Vn;

