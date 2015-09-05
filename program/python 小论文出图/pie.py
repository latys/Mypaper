"""
Demo of a basic pie chart plus a few additional features.

In addition to the basic pie chart, this demo shows a few optional features:

    * slice labels
    * auto-labeling the percentage
    * offsetting a slice with "explode"
    * drop-shadow
    * custom start angle

Note about the custom start angle:

The default ``startangle`` is 0, which would start the "Frogs" slice on the
positive x-axis. This example sets ``startangle = 90`` such that everything is
rotated counter-clockwise by 90 degrees, and the frog slice starts on the
positive y-axis.
"""
##import matplotlib.pyplot as plt
##import sys 
##reload(sys)
##from pylab import *  
##mpl.rcParams['font.sans-serif'] = ['SimHei'] #指定默认字体  
##  
##mpl.rcParams['axes.unicode_minus'] = False #解决保存图像是负号'-'显示为方块的问题  
##sys.setdefaultencoding('utf-8') 
##
### The slices will be ordered and plotted counter-clockwise.
##labels = u"北美", u"太平洋地区", "非洲及中东", "亚洲","欧洲","拉美及加勒比海区域"
##sizes = [22.28, 1.22, 1.48, 36.44,38.18,1.48]
##colors = ['yellowgreen', 'gold', 'lightskyblue', 'lightcoral','r','y']
##explode = (0, 0,0,0.1, 0, 0) # only "explode" the 2nd slice (i.e. 'Hogs')
##
##plt.pie(sizes, explode=explode, labels=labels, colors=colors,
##        autopct='%1.1f%%', shadow=True, startangle=90)
### Set aspect ratio to be equal so that pie is drawn as a circle.
##plt.axis('equal')
##
##plt.show()
##from pylab import *  
##mpl.rcParams['font.sans-serif'] = ['SimHei'] #指定默认字体  
##  
##mpl.rcParams['axes.unicode_minus'] = False #解决保存图像是负号'-'显示为方块的问题  
##  
##t = arange(-5*pi, 5*pi, 0.01)  
##y = sin(t)/t  
##plt.plot(t, y)  
##plt.title(u'这里写的是中文')  
##plt.xlabel(u'X坐标')  
##plt.ylabel(u'Y坐标')  
##plt.show()  
# -----------------------------------------------------------------------------
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset

def simulate():
    d = 0.005
    x = np.random.uniform(0,d)
    y = d-x
    x,y = np.random.uniform(0,d,2)

    dt = 0.05
    t = 35.0
    alpha = 0.25
    n = int(t/dt)
    X = np.zeros(n)
    Y = np.zeros(n)
    C = np.random.randint(0,2,n)

    for i in xrange(n):
        # Asynchronous
        if 0:
            if C[i]:
                x += (alpha + (x-y)) * (1-x) * dt
                x = max(x,0.0)
                y += (alpha + (y-x)) * (1-y) * dt
                y = max(y,0.0)
            else:
                y += (alpha + (y-x)) * (1-y) * dt
                y = max(y,0.0)
                x += (alpha + (x-y)) * (1-x) * dt
                x = max(x,0.0)
        # Synchronous
        else:
            dx = (alpha + (x-y)) * (1-x) * dt
            dy = (alpha + (y-x)) * (1-y) * dt
            x = max(x+dx, 0.0)
            y = max(y+dy, 0.0)
        X[i] = x
        Y[i] = y
    return X,Y





np.random.seed(11)
S = []
n = 250
for i in range(n):
    S.append(simulate())


plt.figure(figsize=(20,10))
ax = plt.subplot(121, aspect=1)
axins = zoomed_inset_axes(ax, 25, loc=3)
for i in range(n):
    X,Y = S[i]
    if X[-1] > 0.9 and Y[-1] > 0.9:
        c = "r"
        lw = 1.0
        axins.scatter( X[0],Y[0], c='r', edgecolor='w', zorder=10)
    else:
        c = "b"
        lw = 1.0
    ax.plot(X,Y, c=c, alpha=.25, lw=lw)
    axins.plot(X,Y, c=c, alpha=.25, lw=lw)

ax.set_xlim(0,1)
ax.set_ylim(0,1)
ax.set_xlabel('x position')
ax.set_ylabel('y position')
ax.set_title('%d trajectories of a dual particle system (x,y)' % n)
axins.set_xlim(0.01, 0.02)
axins.set_xticks([])
axins.set_ylim(0.01, 0.02)
axins.set_yticks([])

ax = plt.subplot(122, aspect=1)
axins = zoomed_inset_axes(ax, 50, loc=3)
axins.set_axis_bgcolor((1,1,.9))
n = 9
for i in range(n):
    X,Y = S[i]
    ls = '-'
    if i==2:
        ls='--'
    if X[-1] > 0.9 and Y[-1] > 0.9:
        c = "r"
        lw = 2.0
        axins.scatter( X[0],Y[0], s=150, c='r', edgecolor='w', zorder=10,lw=2)
    else:
        c = "b"
        lw = 2.0
    ax.plot(X,Y, c=c, alpha=.75, lw=lw, ls=ls)
    axins.plot(X,Y, c=c, alpha=.75, lw=lw, ls=ls)

ax.set_xlim(0,1)
ax.set_ylim(0,1)
ax.set_xticks([0, 1])
ax.set_yticks([0, 1])
ax.set_xticklabels(["0", "1"], fontsize=16)
ax.set_yticklabels(["0", "1"], fontsize=16)
ax.set_xlabel('x position',fontsize=20)
ax.set_ylabel('y position',fontsize=20)
#ax.set_title('%d trajectories of a dual particle system (x,y)' % n)
axins.set_xlim(0.01, 0.02)
axins.set_xticks([])
axins.set_ylim(0.01, 0.02)
axins.set_yticks([])

plt.savefig('figure-3.pdf')
plt.show()
