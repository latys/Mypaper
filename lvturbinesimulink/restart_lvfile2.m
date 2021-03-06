clear
clc

 
% 
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

global  Ve roughness turb_int R ro_air Jem Jwt K c1 c2 c3 c4 c5 c6 C

%额定功率
C=1.499e6;

%风速模块
Ve=13; 
roughness=600;
turb_int=12;
%风轮模块
c1=0.5176;
c2=116;
c3=0.4;
c4=5;
c5=21;
c6=0.0068;

R=40;
ro_air=1.25;


%传动链模块
Jem=90;
Jwt=49.5e5;
K=83.531;

%发电机模块
% http://v.youku.com/v_show/id_XMTEzNzQzMDc2.html
%控制器参数
X1=5;
X2=5;

sim('restart_lv2');   
         
disp('end')