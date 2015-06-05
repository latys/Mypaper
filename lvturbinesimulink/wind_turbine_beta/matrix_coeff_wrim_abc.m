%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Matrix Coefficients for ABC/abc Model of Wound Rotor Induction Machine %
%                       Last Update 10.05.20002                            %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Rs=stator(1);
Lsgm_s=stator(2);

Rr=rotor(1);
Lsgm_r=rotor(2);

Msr=2*Lm/3;

%Self inductances
Ls=Lsgm_s+Lm;
Lr=Lsgm_r+Lm;

K1=Ls*Lr/(Msr^2);

K2=(K1-3/4)/(K1-9/4);

K3=-(3/4)/(K1-9/4);

K4=-(1/Msr)/(K1-9/4);

dlt=2*pi/3;

a11=K2*Rs/Ls;
a12=K3*Rs/Ls;
a13=3*Msr*sqrt(3)*K4/4;
a14=K4*Rr;
a15=Msr*(K2-K3)/Ls;
a16=K2/Ls;
a17=K3/Ls;
a18=K4;

a31=K4*Rs;
a32=Msr*(K2-K3)/Lr;
a33=K2*Rr/Lr;
a34=K3*Rr/Lr;
a35=3*Msr*sqrt(3)*K4/4;
a36=K4;
a37=K2/Lr;
a38=K3/Lr;
