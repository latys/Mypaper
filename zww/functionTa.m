function y=functionTa(x)
    
global Jr ng Jg rho Kr Kg c0;
global C1 C2 C3 C4 C5;
global R
global max_P
global K1 K2 K3;
global Ta;
global Mu;
Mu=0.43;
Ta=1/2*rho*pi*R^3*(-0.0026*x(2)^2*R^2+0.0372*x(2)*R*x(1)-0.0678*x(1)^2);
y=Mu*Ta*x(2);
end