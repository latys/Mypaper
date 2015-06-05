
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