clc
clear
load changeoutput
% a=Tr(200:end,1);
% b=Tr(200:end,2);

a=changeoutput(:,1);
b=changeoutput(:,2);

plot(a,b)
xlabel('时间（s）')
ylabel('发电机输出功率（W）')
grid on