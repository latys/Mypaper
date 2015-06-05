i_min=135;
i_step=0.1;
i_max=150;
i_kind=(i_max-i_min)/i_step+1;

for i=1:i_kind
    i;
    W=i_min+(i-1)*i_step;
        try
            sim('new_lv_trygenerator_mode1');
            %p(i,j)=max(abs(Pe(round(end*2/3+1):end)));
            p(i)=abs(Pe(round(end*2/3+1):end))
            %if p(i,j)<0.1
            if p(i)==0
                X=W
            end
        catch        
        end            
end
% p_min=min(min(p));
% for i=1:i_kind
% 	if p(i)==p_min
%             r=[p_min i_min+(i-1)*i_step j_min+(j-1)*j_step]
%             break;
%     end
% end