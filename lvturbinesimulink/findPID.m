i_min=0;
i_step=0.5;
i_max=10;
i_kind=(i_max-i_min)/i_step+1;

j_min=-10;
j_step=0.5;
j_max=0;
j_kind=(j_max-j_min)/j_step+1;

for i=1:i_kind
    i;
    X1=i_min+(i-1)*i_step;
    for j=1:j_kind
        X2=j_min+(j-1)*j_step;
        try
            sim('new_lv_try_control');
            %p(i,j)=max(abs(Pe(round(end*2/3+1):end)));
            p(i)=max(abs(Pe(round(end*2/3+1):end)))
            %if p(i,j)<0.1
            if p(i)<0.1
                X=[X1 X2]
            end
        catch        
        end            
    end
end
p_min=min(min(p));
for i=1:i_kind
        for j=1:j_kind
	if p(i,j)==p_min
            r=[p_min i_min+(i-1)*i_step j_min+(j-1)*j_step]
            break;
        end
    end
end