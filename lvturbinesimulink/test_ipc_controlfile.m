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

global  Ve roughness turb_int R ro_air Jem Jwt K v c1 c2 c3 c4 c5 c6 C h K1 K2

%�����
C=1.5e6;

%����ģ��
Ve=13; 
roughness=600;
turb_int=12;
%����ģ��
c1=0.5176;
c2=116;
c3=0.4;
c4=5;
c5=21;
c6=0.0068;

R=38.5;
ro_air=1.225;


%������ģ��
Jem=97.5;
Jwt=3.28e6;
K=75.76;

%�����ģ��

%����������
 K1=16.415;
 K2=0.005;

%��Ȩֵ
h=0.67;

%���ٲɼ�
 v=repmat(12.5,[1,1000]);

sim('test_ipc_control'); 
         
disp('end')