function output=compute_Ta(x)
global rho R C1 C2 C3 C4 C5 C6;

v=x(1);
beta=x(2);
omega=x(3);



Lamda=omega*R/v;
Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
Cp=C1*(C2/Lamda_i-C3*beta-C4)*exp(C5/Lamda_i)+C6*Lamda;
%if Cp>0.434;
 %   Cp=0.434;
%end
%if Cp<0.428;
 %   Cp=0.428;
%end
Mu=0.6
tmp1=Mu*Cp;
tmp2=Mu*0.5*rho*pi*R^3*Cp*v^2/Lamda;

output=[tmp1,tmp2];

