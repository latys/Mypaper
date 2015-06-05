function output=Mycontroller(x)

global ctrlpara;
global beta;

global stop_time step_time;
global pre_e sum_e;

%%%%%%  比例控制
%output=beta+ctrlpara(1)*x; 

%%%%%%  PID控制
e=x(1);
ie=(sum_e+e)*step_time;
de=(e-pre_e)/step_time;
tmp=beta+ctrlpara(1)*e+ctrlpara(2)*ie+ctrlpara(3)*de; %%%%%%  PID控制

beta=tmp;
pre_e=e;
sum_e=sum_e+e;

output=beta;

%%%%%%%%%%%%%%%%% 自己的鲁棒控制器