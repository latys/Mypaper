function output=Mycontroller_sign(x)
beta=x(1);
v=x(2);
omega=x(3);

global C1 C2 C3 C4 C5;
global R;

Lamda=omega*R/v;
Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
Cp1=C1*(C2/Lamda_i-C3*beta-C4)*exp(C5/Lamda_i);
Cp1=min(max(0,Cp1),0.59);

beta=beta+0.1;
Lamda=omega*R/v;
Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
Cp2=C1*(C2/Lamda_i-C3*beta-C4)*exp(C5/Lamda_i);
Cp2=min(max(0,Cp2),0.59);

global ctrl_flag;

if ctrl_flag==1
    if Cp2<Cp1*0.3
        output=-1;
        ctrl_flag=-1;
    else
        output=1;
    end

else
   if Cp2>Cp1*3
        output=1;
        ctrl_flag=1;
    else
        output=-1;
   end

end
output=1;

    