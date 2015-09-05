# -*- coding: cp936 -*-
"""
Simple demo of a horizontal bar chart.
"""
import matplotlib.pyplot as plt; plt.rcdefaults()
import numpy as np
import matplotlib.pyplot as plt
from pylab import *
myfont = matplotlib.font_manager.FontProperties(fname=r'C:/Windows/Fonts/STSONG.TTF',size=14)
mpl.rcParams['font.sans-serif'] = [myfont] #指定默认字体  
##  
mpl.rcParams['axes.unicode_minus'] = False #解决保存图像是负号'-'显示为方块的问题 

# Example data
width=0.5
people = (u'2001年', u'2002年', u'2003年', u'2004年', u'2005年',u'2006年',u'2007年',u'2008年',u'2009年',u'2010年',u'2011年',u'2012年',u'2013年')
x_pos =  np.arange(len(people))
performance = (23900,31100,39431,47620,59091,73938,93839,120624,158975,198001,238126,283048,318137)
error = np.random.rand(len(people))
plt.figure(figsize=(12,6))
#plt.bar(y_pos, performance, xerr=error, align='center', alpha=0.4)
plt.bar(x_pos+width, performance, width, align='edge', alpha=0.6,color='g')

plt.xticks(x_pos+width, people,fontproperties=myfont,rotation=45)
plt.xlabel(u'全球风电累计装机容量：MW',fontproperties=myfont)
plt.grid()
#plt.title('How fast do you want to go today?')

#plt.savefig(u'全球风电累计装机容量',format='pdf',dpi=600)
plt.savefig('aa.svg',format='svg',dpi=600)
plt.show()

