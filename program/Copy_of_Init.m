clear
clc

Omegae=1;
Nr=1;
R=38.5;
L=27;
lam0=0.272;
J=4000000;
K=921228;
B=0.001;
V=12;
beta=0;

Rho=1.25;
r=3;

c1=0.2200;
c2=116;
c4=5;
c5=-12.5;
c6=0.0068;
lamN=7.9;
mu=1;

syms er Vd V Omegar_exp_d Omegar K2;

%K2=-2*10^7;
               
Omegar_exp=lamN*V/R;
Omegar_exp_d=lamN*Vd/R;
Omegar=Omegar_exp-er;
Ta=1/2*Rho*pi*R^3*(-0.0026*Omegar^2*R^2+0.0372*Omegar*R*V-0.0678*V^2)
F=Omegar_exp_d-1/J*(-K*Omegar+mu*Ta)
fv=er*(F+K2/J*er);

solve(fv<0,K2)

           



    

% OmegarN=lamN*R/V;
% OmegarNd=-lamN*R*Vd/V^2;
% 
% Omegar=Nr*Omegae;
% lam=Omegar*R/V;
% lam1=1/(1/lam-0.035);
% Kt=3/2*lam0*Nr;
% Cp=c1*(c2/lam1-c4)*exp(-c5/lam1)+c6*lam;
% Ta=Rho*pi*R^3*Cp*V^2/(2*lam);



% for x1=0:1000
%    for x2=0:0.1:16
%        for K1=0:0.1:10
% 
%          for   K2=0:0.1:10;
% 
% 
% 
%             Omegar=Nr*Omegae;
%             lam=Omegar*R/V;
%             lam1=1/(1/lam-0.035);
%             Kt=3/2*lam0*Nr;
%             Cp=c1*(c2/lam1-c4)*exp(-c5/lam1)+c6*lam;
%             Ta=Rho*pi*R^3*Cp*V^2/(2*lam);
%             c=(B+K1)/J;
%             b=(K+K2)/J-(0.0372*Rho*pi*R^4*V)/(2*J);
%             A=[0 1;-c -b];
%             Mu=(-b+sqrt(b^2-4*c))/2;
%             Eta=[1;(-b+sqrt(b^2-4*c))/2];
%             Hess2=[0 0;0 -0.0026*Rho*pi*R^5/J];
%             m=-0.0026*Rho*pi*R^5/J;
%             (-b+sqrt(b^2-4*c))/(-b^2+b*sqrt(b^2-4*c)+6*c)*m;
%             (-b+sqrt(b^2-4*c))/(-b^2+b*sqrt(b^2-4*c)+6*c)*m*(-b+sqrt(b^2-4*c))/4;
%             
%             hs=x1+Mu*x2+(-b+sqrt(b^2-4*c))/(-b^2+b*sqrt(b^2-4*c)+6*c)*m*x1*x2+(-b+sqrt(b^2-4*c))/(-b^2+b*sqrt(b^2-4*c)+6*c)*m*(-b+sqrt(b^2-4*c))/4*x2^2
%          end
%        end
% 
%    
%    end
%    
% end

