function y=mycontroller2(x)
x
global Jg Dg ng Dr Jr K eku;
omega_g_d=x(1)
Ta_d=x(2)
Ta_dd=x(3)
omega_r_exp_ddd=x(4)
omega_r_exp_dd=x(5)

y=(Jg-Dg)*omega_g_d-ng*Jg/Dr*(Ta_d+Ta_dd)+ng*Jg*Jr/Dr*(omega_r_exp_ddd+omega_r_exp_dd)