clear
clc

r=xlsread('Data_Wind_RotorSpeed'); %正常源数据，第一列为输入，第二列为输出

X = r(1:2:10000,1:2)
%X=X'
Y = r(1:2:10000,3)
% Y = sign(sin(X))
gam = 5;
 sig2 = 0.4;
 
 type = 'classification';
[alpha,b] = trainlssvm({X,Y,type,gam,sig2,'RBF_kernel'});
plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});
% type='function estimation'
%  [gam,sig2] = tunelssvm({X,Y,type,[],[],'RBF_kernel'},'simplex',...
% 'leaveoneoutlssvm',{'mse'});
% [alpha,b] = trainlssvm({X,Y,type,gam,sig2,'RBF_kernel'});
%  plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});


Xt = r(2:2:10000,1:2);
%Xt=Xt'

 Ytest = simlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b},Xt)
 figure
% plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});
plot(Xt,r(2:2:10000,3),'r-*',Xt,Ytest,'b-o')


r=xlsread('Data_Wind_PowerOutput'); %正常源数据，第一列为输入，第二列为输出

X = r(1:2:10000,1:2)
%X=X'
Y = r(1:2:10000,3)
% Y = sign(sin(X))
gam = 5;
 sig2 = 0.4;
 
 type = 'classification';
[alpha,b] = trainlssvm({X,Y,type,gam,sig2,'RBF_kernel'});
plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});
% type='function estimation'
%  [gam,sig2] = tunelssvm({X,Y,type,[],[],'RBF_kernel'},'simplex',...
% 'leaveoneoutlssvm',{'mse'});
% [alpha,b] = trainlssvm({X,Y,type,gam,sig2,'RBF_kernel'});
%  plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});


Xt = r(2:2:10000,1:2);
%Xt=Xt'

 Ytest = simlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b},Xt)
 figure
% plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});
plot(Xt,r(2:2:10000,3),'r-*',Xt,Ytest,'b-o')


r=xlsread('Data_Wind_PitchAngle'); %正常源数据，第一列为输入，第二列为输出

X = r(1:2:15000,1:2)
%X=X'
Y = r(1:2:15000,3)
% Y = sign(sin(X))
gam = 5;
 sig2 = 0.4;
 
 type = 'classification';
[alpha,b] = trainlssvm({X,Y,type,gam,sig2,'RBF_kernel'});
plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});
% type='function estimation'
%  [gam,sig2] = tunelssvm({X,Y,type,[],[],'RBF_kernel'},'simplex',...
% 'leaveoneoutlssvm',{'mse'});
% [alpha,b] = trainlssvm({X,Y,type,gam,sig2,'RBF_kernel'});
%  plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});


Xt = r(2:2:15000,1:2);
%Xt=Xt'

 Ytest = simlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b},Xt)
 figure
% plotlssvm({X,Y,type,gam,sig2,'RBF_kernel'},{alpha,b});
plot(Xt,r(2:2:15000,3),'r-*',Xt,Ytest,'b-o')

