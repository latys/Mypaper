clc
clear

load cp_cq;
Ctorque=cq(2:5:102,2:5:182);
for i=1:21
    for j=1:37
        if isnan(Ctorque(i,j))
            Ctorque(i,j)=0;                        
        end
    end
end
clear cp_cq

% function Pw=lvfile(v1)
% 
% p=12:0.2:16;
% [q1,q2]=min(abs(p-v1));
% v1=p(q2);
% ro=1.24;
% Pi=3.14;
% R=40;
% 
% %判断是否变桨
% if v1>=0 && v1<3
%         Pw=0;
% else if v1>=3 && v1<13.5
%         Pw=1/2*ro*Pi*R^2*v1^3;
%     else v1>=13.5 && v1<=25
%         Pw=1.5e6;
%     end
% end


% global c1 c2 c3 c4 c5 c6
% c1=0.5176;
% c2=116;
% c3=0.4;
% c4=5;
% c5=21;
% c6=0.0068;

% %风机叶片直径变桨执行器时间常数
% global R Tact
% R=40;
% Tact=0;

sim('lvtest_table'); 

 
 disp('end')
