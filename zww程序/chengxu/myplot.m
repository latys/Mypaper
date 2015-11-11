load('fadianjishuchuzhuanju5.mat')
load('fengdianjishuchugonglv5.mat')
load('fenglunzhuansu5.mat')
load('fengnengliyongxishu5.mat')

load('fengnengliyongxishu7.mat')
load('fenglunzhuansu7.mat')
load('fengdianjishuchugonglv7.mat')
load('fadianjishuchuzhuanju7.mat')

load('fengnengliyongxishu9.mat')
load('fenglunzhuansu7.mat')
load('fengdianjishuchugonglv7.mat')
load('fadianjishuchuzhuanju7.mat')
figure(1)
subplot(3,1,1)

plot(fengnengliyongxishu5,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,2)

plot(fengnengliyongxishu7,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,3)

plot(fengnengliyongxishu9,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

figure(2)
subplot(3,1,1)
plot(fenglunzhuansu5,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风轮转速 / rad·s-1')
xlim([0 300])

subplot(3,1,2)
plot(fenglunzhuansu7,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风轮转速 / rad·s-1')
xlim([0 300])

subplot(3,1,3)
plot(fenglunzhuansu9,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风轮转速 / rad·s-1')
xlim([0 300])


figure(3)
subplot(3,1,1)
plot(fengdianjishuchugonglv5,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风电机组输出功率 / W')
xlim([0 300])

subplot(3,1,2)
plot(fengdianjishuchugonglv7,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风电机组输出功率 / W')
xlim([0 300])

subplot(3,1,3)
plot(fengdianjishuchugonglv9,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风电机组输出功率 / W')
xlim([0 300])



figure(4)
subplot(3,1,1)
plot(fadianjishuchuzhuanju5,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('发电机输出转矩 /N.m')
xlim([0 300])

subplot(3,1,2)
plot(fadianjishuchuzhuanju7,'LineWidth',1.5)
xlabel('时间(s)')
ylabel('发电机输出转矩 /N.m')
xlim([0 300])

subplot(3,1,3)
plot(fadianjishuchuzhuanju9,'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('发电机输出转矩 /N.m')
xlim([0 300])




% save('fadianjishuchuzhuanju9','TT4')
% save('fengdianjishuchugonglv9','TT5')
% save('fenglunzhuansu9','TT2')
% save('fengnengliyongxishu9','TT3')

% save('fadianjishuchuzhuanju14','TT4')
% save('fengdianjishuchugonglv14','TT5')
% save('fenglunzhuansu14','TT2')
% save('fengnengliyongxishu14','TT3')

%  fadianjishuchuzhuanju16=TT4;
% fengdianjishuchugonglv16=TT5;
% fenglunzhuansu16=TT2;
% fengnengliyongxishu16=TT3;
% save('fadianjishuchuzhuanju16','fadianjishuchuzhuanju16')
% save('fengdianjishuchugonglv16','fengdianjishuchugonglv16')
% save('fenglunzhuansu16','fenglunzhuansu16')
% save('fengnengliyongxishu16','fengnengliyongxishu16')


%  fengnengliyongxishu18=TT5;
% fenglunzhuansu18=TT2;
% fengdianjishuchugonglv18=TT6;
% fadianjishuchuzhuanju18=TT4;
% jiangjujiao18=TT3;
% 
% save('fengnengliyongxishu18','fengnengliyongxishu18');
% save('fenglunzhuansu18','fenglunzhuansu18');
% save('fengdianjishuchugonglv18','fengdianjishuchugonglv18');
% save('fadianjishuchuzhuanju18','fadianjishuchuzhuanju18');
% save('jiangjujiao18','jiangjujiao18');

load('fengnengliyongxishu18.mat')
load('fenglunzhuansu18.mat')
load('fengdianjishuchugonglv18.mat')
load('fadianjishuchuzhuanju18.mat')
load('jiangjujiao18.mat')


load('fengnengliyongxishu16.mat')
load('fenglunzhuansu16.mat')
load('fengdianjishuchugonglv16.mat')
load('fadianjishuchuzhuanju16.mat')
load('jiangjujiao16.mat')

load('fengnengliyongxishu14.mat')
load('fenglunzhuansu14.mat')
load('fengdianjishuchugonglv14.mat')
load('fadianjishuchuzhuanju14.mat')
load('jiangjujiao14.mat')


load('TT14.mat')
load('TT16.mat')
load('TT18.mat')

len14=max(size(TT14))
len16=max(size(TT16))
len18=max(size(TT18))

step=3;

figure(1)
subplot(3,1,1)

plot(TT14(1:step:len14),fengnengliyongxishu14(1:step:len14),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,2)

plot(TT16(1:step:len16),fengnengliyongxishu16(1:step:len16),'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,3)

plot(TT18(1:step:len18),fengnengliyongxishu18(1:step:len18),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

figure(2)
subplot(3,1,1)

plot(TT14(1:step:len14),fenglunzhuansu14(1:step:len14),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,2)

plot(TT16(1:step:len16),fenglunzhuansu16(1:step:len16),'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风轮转速 / rad·s-1')

xlim([0 300])

subplot(3,1,3)

plot(TT18(1:step:len18),fenglunzhuansu18(1:step:len18),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

figure(3)
subplot(3,1,1)

plot(TT14(1:step:len14),fengdianjishuchugonglv14(1:step:len14),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,2)

plot(TT16(1:step:len16),fengdianjishuchugonglv16(1:step:len16),'LineWidth',1.5)
xlabel('时间(s)')
ylabel('风电机组输出功率 / W')
xlim([0 300])

subplot(3,1,3)

plot(TT18(1:step:len18),fengdianjishuchugonglv18(1:step:len18),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

figure(4)
subplot(3,1,1)

plot(TT14(1:step:len14),fadianjishuchuzhuanju14(1:step:len14),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,2)

plot(TT16(1:step:len16),fadianjishuchuzhuanju16(1:step:len16),'LineWidth',1.5)
xlabel('时间(s)')
ylabel('发电机输出转矩 /N.m')
xlim([0 300])

subplot(3,1,3)

plot(TT18(1:step:len18),fadianjishuchuzhuanju18(1:step:len18),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

figure(5)
subplot(3,1,1)

plot(TT14(1:step:len14),jiangjujiao14(1:step:len14),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])

subplot(3,1,2)

plot(TT16(1:step:len16),jiangjujiao16(1:step:len16),'LineWidth',1.5)
xlabel('时间(s)')
ylabel('桨距角 /°')
xlim([0 300])

subplot(3,1,3)

plot(TT18(1:step:len18),jiangjujiao18(1:step:len18),'LineWidth',1.5)
xlabel('时间(s)')
%ylabel('风能利用系数')
xlim([0 300])