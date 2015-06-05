 function u=reference(v1)

p=12:0.2:16;
[q1,q2]=min(abs(p-v1));
v1=p(q2);


if v1>=0 && v1<3
    u=0;
else if v1>=3 && v1<12.5
        u=1.5e6*exp(-(v1-13.5)^2/5^2);
    else v1>=12.5 && v1<=25
        u=1.5e6;
    end
end






