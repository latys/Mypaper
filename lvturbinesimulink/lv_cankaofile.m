clear
clc

load cp_cq;
Ctorque=cq(2:5:102,2:5:182);
for i=1:21
    for j=1:37
        if isnan(Ctorque(i,j))
            Ctorque(i,j)=0;                        
        end
    end
end
clear cp_cq

global init_x0;

init_x0=[0 -1.9324e003 -223.194 3.8959e003];

global steptime tmpw 
steptime=0.01;
tmpw=0;

global  Ve roughness turb_int beta R ro_air cut_in cut_out Tact Jem Jwt K  fs p Rs Lsgm_s Rr Lsgm_r Lm Lr Ls D 
Ve=13.5; 
roughness=600;
turb_int=12;
beta=0;

R=40;
ro_air=1.225;
cut_in=3;
cut_out=25;
Tact=0;

Jem=90;
Jwt=9e7;
K=83;


fs=50;
p=2;

Rs=0.0043;
Lsgm_s=0.0125;
Rr=0.0041;
Lsgm_r=0.0126;
Lm=0.0123;

% Lm=1.5*Lmo;
Ls=Lsgm_s+Lm;
Lr=Lsgm_r+Lm;
D=Ls*Lr-Lm^2;

simnum=1;

%      for k=1:simnum
%          
% %           myseed=round(rand(1)*1000);
%           PP=[0.031 0.43 0.013 0.39];
          
          sim('lv_cankao');   

%           P11=sum(F4)*steptime/((1.0e+006));
%           P21=sum(abs(F4)*steptime)/((1.0e+006));
%           P31=F4'*F4*steptime/((1.0e+006));
%           P41=MYT'*abs(F4)*steptime/((1.0e+006));
% 
%           q(k,1)=P11;
%           q(k,2)=P21;
%           q(k,3)=P31;
%           q(k,4)=P41; 
%         
%           P12=sum(F4(end/2+1:end)*steptime)/(1.0e+006); 
%           P22=sum(abs(F4(end/2+1:end))*steptime)/(1.0e+006); 
%           P32=F4(end/2+1:end)'*F4(end/2+1:end)*steptime/(1.0e+006);
%           P42=MYT(end/2+1:end)'*abs(F4(end/2+1:end))*steptime/(1.0e+006);
%      
%           Q(k,1)=P12;
%           Q(k,2)=P22;
%           Q(k,3)=P32;
%           Q(k,4)=P42;  
%          
%        
%      end
%          q;    
%          Q;
%         
%          A1=mean(q);
%          V1=var(q);
%          
%          A2=mean(Q);
%          V2=var(Q) ; 
% 
% %          save data9 q Q;
%          
disp('end')