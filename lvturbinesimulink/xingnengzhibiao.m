clc
clear
load comparedata17b
% a=Tr(200:end,1);
% b=Tr(200:end,2);

a=comparedata17b(:,1);
b=comparedata17b(:,2);
c=comparedata17b(:,3);

[m,n]=size(a);
ISE=0;
IEA=0;
%计算统一变桨距的性能指标
for i=370:m
    ISE=ISE+((1.5e6-b(i))/1e6)^2;
end
ISE

for j=370:m
    IEA=IEA+abs(1.5e6-b(j))/1e6;
end
IEA


%计算独立变桨距的性能指标

[m1,n1]=size(a);
ISE1=0;
IEA1=0;

for i=370:m1
    ISE1=ISE1+((1.5e6-c(i))/1e6)^2;
end
ISE1

for j=370:m1
    IEA1=IEA1+abs(1.5e6-c(j))/1e6;
end
IEA1


