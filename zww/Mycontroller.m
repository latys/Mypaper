function output=Mycontroller(x)

global ctrlpara;
global beta;

global stop_time step_time;
global pre_e sum_e;

%%%%%%  ��������
%output=beta+ctrlpara(1)*x; 

%%%%%%  PID����
e=x(1);
ie=(sum_e+e)*step_time;
de=(e-pre_e)/step_time;
tmp=beta+ctrlpara(1)*e+ctrlpara(2)*ie+ctrlpara(3)*de; %%%%%%  PID����

beta=tmp;
pre_e=e;
sum_e=sum_e+e;

output=beta;

%%%%%%%%%%%%%%%%% �Լ���³��������