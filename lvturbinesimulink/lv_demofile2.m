clear
clc

global  Vw roughness turb_int R ro_air cut_in cut_out Tact Jem Jwt K X1 X2 C1 C2 C3 C4
%����ģ��
Vw=13; 
% roughness=600;
% turb_int=12;
%����ģ��
C1=0.44;
C2=0.0167;
C3=0.3;
C4=0.00184;

R=38.5;
ro_air=1.2236;
cut_in=3;
cut_out=25;
Tact=0;

%������ģ��
Jem=97.5;
Jwt=3.2753e6;
K=83;



X1=10; 
X2=20;
%�����ģ��
sim('lv_demo');   
         
disp('end')