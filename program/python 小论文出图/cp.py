
import numpy as np
import matplotlib.pyplot as plt


c1=0.5176
c2=116
c3=0.4
c4=5
c5=21
c6=0.0068
lam=np.linspace(0,15,100)
for beta in np.linspace(0,20,5):
    lam1=1/(1/(lam+0.08*beta)-0.035/(pow(beta,3)+1))
    cp=c1*(c2/lam1-c3*beta-c4)*pow(np.e,-c5/lam1)
   
    #lami=1/(lam+0.8*beta)-0.035/(pow(beta,3))
    #cp=0.22*(116*lami-0.4*beta-5)*pow(np.e,-12.5*lami)
    #cp=(0.44-0.0167*beta)*np.sin(np.pi*(lam-3)/(15-0.3*beta))-0.00184*(lam-3)*beta
    plt.figure(1)  #❶ # 选择图表1
    plt.ylim(-0.1,0.5)
    plt.xlim(0,15)
   
    plt.plot(lam, cp)
plt.xlabel(r'$\lambda$')
plt.ylabel(r'$Cp$')
plt.text(10, 0.4, r'$\beta=0^{\circ}$')
plt.text(13, 0.2, r'$\beta=5^{\circ}$')
plt.text(9.5, 0.17, r'$\beta=10^{\circ}$')
plt.text(10, -0.01, r'$\beta=15^{\circ}$')
plt.text(6.2, 0.08, r'$\beta=20^{\circ}$')
plt.annotate(r'$\lambda_{opt}$', xy=(7.9, -0.1), xytext=(6, -0.05),
            arrowprops=dict(arrowstyle="->"))
plt.annotate(r'$c_{pmax}$', xy=(0, 0.425), xytext=(1, 0.39),
            arrowprops=dict(arrowstyle="->"))
x=np.linspace(7.98,7.98,100)
y=np.linspace(-0.1,0.427,100)
plt.plot(x,y,'--',color="black")

x=np.linspace(0,7.98,100)
y=np.linspace(0.427,0.425,100)
plt.plot(x,y,'--',color="black")

plt.savefig('cp.png',dpi=600,format='png')
    #plt.savefig('power.png', dpi=600)
plt.show()


