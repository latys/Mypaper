R=21.65 
rho=1.308 
Jr=3.25*10^55 
Jg=34.4 
Dr=27.36 
Dg=0.2
Kls=9500 
Dls=2.691*10^5
Penom=600*10^3
Temax=3.753*10^5
ng=43.165

lamN=0.272;
flag=1;

% for K4=0:0
%     for K3=0:0
%       for er=-0.5:0.1:0.5
%           for eg=0.5:0.1:0.5
%                for V=3:12
%                     for Vd=-2:2
%                         for thetar=0:0
%                             for thetag=0:0
%                                         Omegar_exp=lamN*V/R;
%                                         Omegar_exp_d=lamN*Vd/R;
%                                         Omegar=Omegar_exp-er;
% 
%                                         Omegag_exp=ng*Omegar_exp;
%                                         Omegag_exp_d=ng*Omegar_exp_d;
%                                         Omegag=Omegag_exp-eg;
% 
%                                         Ta=1/2*rho*pi*R^3*(-0.0026*Omegar^2*R^2+0.0372*Omegar*R*V-0.0678*V^2);
% 
%                                         Fr=(Kls*(thetar-thetag/ng)+Dls*(Omegar-Omegag/ng)+Dr*Omegar)/Jr;
%                                         Fg=(Dls*(Omegar-Omegag/ng)-Dg*ng*Omegag)/(Jg*ng);
% 
%                                         %F=Omegar_exp_d-1/J*(-K*Omegar+mu*Ta);
% 
%                                         %fv=er*(F+K2/J*er+(K1+B)/J*thetar)+thetar*(Omegar_exp-er);
%                                         fv=er*(Omegar_exp_d-Ta/Jr+Fr)+eg*(ng*Omegar_exp_d+(K3*er+K4*eg)/Jg-Fg)
%                                         
%                                         Ksum(j)=(-er*(Omegar_exp_d-Ta/Jr+Fr)-eg*(ng*Omegar_exp_d-Fg))*Jg/er;
%                                         j++
%                                         if fv>0                    
%                                             flag=0;
%                                             break;
%                                         end   
%                             end
%                                         if flag==0
%                                         break;
%                                         end  
%                         end
%                          if flag==0
%                         break;
%                          end  
%                      end
%                    
%                          if flag==0
%                             break;
%                          end  
%                  end
%                    if flag==0
%                        break;
%                    end
%             end
%        if flag==0
%            break;
%        end
%       end
%           if flag==1
%             RK(i)=[K3 K4];
%             i=i+1;
%           end
%          flag=1;
%     end 
%    
% 
%  end

for K4=0:0
    for K3=0:0
      for er=-0.5:0.1:0.5
          for eg=0.5:0.1:0.5
               for V=3:12
                    for Vd=-2:2
                        for thetar=0:0
                            for thetag=0:0
                                        Omegar_exp=lamN*V/R;
                                        Omegar_exp_d=lamN*Vd/R;
                                        Omegar=Omegar_exp-er;

                                        Omegag_exp=ng*Omegar_exp;
                                        Omegag_exp_d=ng*Omegar_exp_d;
                                        Omegag=Omegag_exp-eg;

                                        Ta=1/2*rho*pi*R^3*(-0.0026*Omegar^2*R^2+0.0372*Omegar*R*V-0.0678*V^2);

                                        Fr=(Kls*(thetar-thetag/ng)+Dls*(Omegar-Omegag/ng)+Dr*Omegar)/Jr;
                                        Fg=(Dls*(Omegar-Omegag/ng)-Dg*ng*Omegag)/(Jg*ng);

                                        %F=Omegar_exp_d-1/J*(-K*Omegar+mu*Ta);

                                        %fv=er*(F+K2/J*er+(K1+B)/J*thetar)+thetar*(Omegar_exp-er);
                                       % fv=er*(Omegar_exp_d-Ta/Jr+Fr)+eg*(ng*Omegar_exp_d+(K3*er+K4*eg)/Jg-Fg)
                                        
                                        Ksum(j)=(-er*(Omegar_exp_d-Ta/Jr+Fr)-eg*(ng*Omegar_exp_d-Fg))*Jg/er;
                                        j=j+1
                                        
                            end
                        end
                       
                     end
                   
                 end
                 
            end
      
      end
         
        
    end 
   

 end
