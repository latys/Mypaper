%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Coefficients for ABC/abc Model of 3-phase Transformer %
%           Core structure is taken into account        %
%               Last Update 6.08.2002                   %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Base power
Sbase=power(1);

%No load losses
Po=power(2);

%Base HV voltage
Ubase_hv=voltage(1);

%Base HV voltage
Ubase_lv=voltage(2);

%Base impedance LV
Zbase_lv=3*(Ubase_lv^2)/Sbase;

%Transformer turns ratio
alpha_T=Ubase_hv/Ubase_lv;

%No load losses per unit
Po_pu=Po/Sbase;

%
omg=2*pi*frequency;

%High-voltage windings
R1=hv_winding(1);
X1=hv_winding(2);

%Low-voltage windings
R2=lv_winding(1);
X2=lv_winding(2);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Lsgm=[ X1,     0,     0,     0,     0,     0;...
        0,    X1,     0,     0,     0,     0;...
        0,     0,    X1,     0,     0,     0;...
        0,     0,     0,    X2,     0,     0;...
        0,     0,     0,     0,    X2,     0;...
        0,     0,     0,     0,     0,    X2]./omg;


R=[    R1,     0,     0,     0,     0,     0;...
        0,    R1,     0,     0,     0,     0;...
        0,     0,    R1,     0,     0,     0;...
        0,     0,     0,    R2,     0,     0;...
        0,     0,     0,     0,    R2,     0;...
        0,     0,     0,     0,     0,    R2];

a=core_ratio;

%3limb core
%Ideal transformer matrix

k1=-0.5*(1+2*a)/(1+a);
k2=-0.5/(1+a);
k3=(1+2*a)/(1+a);

Ti=[  1, k1, k2,  1, k1, k2;...
     k1, k3, k1, k1, k3, k1;...
     k2, k1,  1, k2, k1,  1;...
      1, k1, k2,  1, k1, k2;...
     k1, k3, k1, k1, k3, k1;...
     k2, k1,  1, k2, k1,  1];

T=Ti(1:3,1:3);

dlt=0.001*eye(3,3);

Z=j*(dlt+T);

U=[exp(j*0);exp(-j*2*pi/3);exp(+j*2*pi/3)];

I=Z\U;

Iu=mean(abs(I));

Io_pu=0.002;

PU=real(I'*T*(I));

zeta=Iu/Io_pu;

c=zeta^2*Po_pu/PU;

k=sqrt((zeta^2-c^2)/omg^2);

R0=c*Zbase_lv*alpha_T^2*Ti;
L0=k*Zbase_lv*alpha_T^2*Ti;

Re=R+R0;
Le=Lsgm+L0;

a=-Le\Re;

b=inv(Le);
