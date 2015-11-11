 function u=reference(v1)

p=12:0.2:16;
[q1,q2]=min(abs(p-v1));
v1=p(q2);


if v1>=0 && v1<3
    u=0;
else
        u=1.97;
end






