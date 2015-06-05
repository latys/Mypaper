clear
clc

R=38.5;
global C1 C2 C3 C4 C5;
C1=0.22;
C2=116;
C3=0.4;
C4=5;
C5=-12.5;
% 
x=2;
v=10;

for i=1:20
    beta=((i-1)*1);  
    Lamda=x*R/v;
    Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
    Cp(i)=C1*(C2/Lamda_i-C3*beta-C4)*exp(C5/Lamda_i);
end

plot(1:20,Cp)

% figure(2)
% beta=10;
% for i=1:16
%     Lamda=(i-1)*1;  
%     Lamda_i=1/(1/(Lamda+0.08*beta)-0.035/(beta^3+1));
%     Cp(i)=C1*(C2/Lamda_i-C3*beta-C4)*exp(C5/Lamda_i);
% end
% plot(Cp)
