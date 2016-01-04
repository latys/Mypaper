c1=0.5176
c2=116
c3=0.4
c4=5
c5=21
c6=0.0068

lam=linspace(0,15,100)

for beta=0:5:20
    lam1=1./(1./(lam+0.08*beta)-0.035/((beta^3)+1))
    cp=c1.*(c2./lam1-c3*beta-c4).*exp(-c5./lam1)+0.05
    ylim([-0.1 0.5])
    plot(lam,cp)
    hold on
end
xlabel('叶尖速比\lambda')
ylabel('风能利用系数C_p')