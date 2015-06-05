function u=celect(r)

if r>=0 && r<30
        u=1;
elseif r>=30 && r<60
        u=2;
elseif r>=60 && r<90
        u=3;
elseif r>=90 && r<120
        u=4;        
elseif r>=120
        u=5;
end
