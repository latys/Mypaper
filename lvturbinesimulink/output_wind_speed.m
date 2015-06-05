clc
clear
load wind
a=wind(:,1);
b=wind(:,2);

plot(a,b)
xlabel('时间（s）')
ylabel('风速（m/s）')
grid on