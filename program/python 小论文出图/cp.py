import numpy as np
import matplotlib.pyplot as plt

lam=np.linspace(0.001,0.5,15)
for beta in np.linspace(0.001,5,20):
    lami=1/(lam+0.8*beta)-0.035/(pow(beta,3))
    cp=0.22*(116*lami-0.4*beta-5)*pow(np.e,-12.5*lami)

    plt.figure(1)  #❶ # 选择图表1
    plt.plot(lam, cp)
    #plt.savefig('power.png', dpi=600)
plt.show()
