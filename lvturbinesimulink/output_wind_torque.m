clc
clear
load changeoutput
% a=Tr(200:end,1);
% b=Tr(200:end,2);

a=changeoutput(:,1);
b=changeoutput(:,2);

plot(a,b)
xlabel('ʱ�䣨s��')
ylabel('�����������ʣ�W��')
grid on