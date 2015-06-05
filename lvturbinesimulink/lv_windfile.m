 function u=myf1(u1)

% p=12:0.2:16;
% [q1,q2]=min(abs(p-u1));
% v1=p(q2);


if u1>=0 && u1<=4
    u=0;
else if u1>4&& u1<=7
        u=(1-(u1-7)/(4-7));
    else u1>7
        u=1;
    end
end