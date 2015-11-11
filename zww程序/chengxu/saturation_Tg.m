function output=saturation_Tg(x)
global rho R Exp_Lamda Exp_Cp ng C rate_omega;

Tg=x(1);
omega_g=x(2);
kopt=1/(2*Exp_Lamda^3*ng^3)*rho*pi*R^5*Exp_Cp;
opt_Tg=kopt*omega_g^2;
rate_Tg=C/rate_omega;
if opt_Tg<=Tg;
    output=Tg;
end
if opt_Tg>Tg;
    output=opt_Tg;
end