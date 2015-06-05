%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Coefficients for ABC/abc Model of 3-phase Transformer %
%               Last Update 10.05.2002                  %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%High-voltage windings
Rhv=high_voltage(1);
Lsgm_hv=high_voltage(2);

%Low-voltage windings
Rlv=low_voltage(1);
Lsgm_lv=low_voltage(2);

%Mutual inductances between stator and rotor windings
Msr=2*Lm/3;

%Self inductances
Lhv=Lsgm_hv+Lm;
Llv=Lsgm_lv+Lm;

%Coefficients
f1=cos(theta*pi/180);
f2=cos(theta*pi/180+2*pi/3);
f3=cos(theta*pi/180-2*pi/3);


K1=Lhv*Llv/Msr^2;
K2=(K1-3/4)/(K1-9/4);
K3=-3/4/(K1-9/4);
K4=-1/Msr/(K1-9/4);

%Matrix coefficients
a11=K2*Rhv/Lhv;
a12=K3*Rhv/Lhv;
a13=K4*Rhv;
a14=K2/Lhv;
a15=K3/Lhv;
a16=K4;

a31=K4*Rlv;
a32=K2*Rlv/Llv;
a33=K3*Rlv/Llv;
a34=K4;
a35=K2/Llv;
a36=K3/Llv;