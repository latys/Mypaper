function y=mycontroller2(x)
global Jr ng Jg rho Kr Kg c0;
global C1 C2 C3 C4 C5;
global R
global max_P
global K1 K2 K3;

K1=0.0012;
%K2=0.0372*rho*pi*R^4*15;
K2=-20000
%K2=2000000;
Jt=Jr+ng^2*Jg;
Kt=Kr+ng^2*Kg;
K3=--1;

%y=K1*x(1)+K2*x (2)+K3*x(3)-(rho*pi*R^3*(-0.0026*x(2)^2*R^2))/(2*Jr);

y=K1*x(1)+K2*x(2)+K3*x(3)
end