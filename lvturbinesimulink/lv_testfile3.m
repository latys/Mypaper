clear
clc

 

% load cp_cq;
% Ctorque=cq(2:5:102,2:5:182);
% for i=1:21
%     for j=1:37
%         if isnan(Ctorque(i,j))
%             Ctorque(i,j)=0;                        
%         end
%     end
% end
% clear cp_cq
% 
% global init_x0;
% 
% init_x0=[0 -1.9324e003 -223.194 3.8959e003];
% 
% global steptime tmpw 
% steptime=0.01;
% tmpw=0;

global  Ve roughness turb_int R ro_air Jem Jwt K C1 C2 C3 C4


%风速模块
Ve=13; 
roughness=600;
turb_int=12;
%风轮模块
C1=0.44;
C2=0.0167;
C3=0.3;
C4=0.00184;

R=38.5;
ro_air=1.225;


%传动链模块
Jem=97.5;
Jwt=3.28e6;
K=76;




%发电机模块
sim('lv_test3');   
         
disp('end')