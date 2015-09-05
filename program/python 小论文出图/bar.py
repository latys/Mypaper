# -*- coding: cp936 -*-
"""
Simple demo of a horizontal bar chart.
"""
import matplotlib.pyplot as plt; plt.rcdefaults()
import numpy as np
import matplotlib.pyplot as plt
from pylab import *
myfont = matplotlib.font_manager.FontProperties(fname=r'C:/Windows/Fonts/STSONG.TTF',size=14)
mpl.rcParams['font.sans-serif'] = [myfont] #ָ��Ĭ������  
##  
mpl.rcParams['axes.unicode_minus'] = False #�������ͼ���Ǹ���'-'��ʾΪ��������� 

# Example data
width=0.5
people = (u'2001��', u'2002��', u'2003��', u'2004��', u'2005��',u'2006��',u'2007��',u'2008��',u'2009��',u'2010��',u'2011��',u'2012��',u'2013��')
x_pos =  np.arange(len(people))
performance = (23900,31100,39431,47620,59091,73938,93839,120624,158975,198001,238126,283048,318137)
error = np.random.rand(len(people))
plt.figure(figsize=(12,6))
#plt.bar(y_pos, performance, xerr=error, align='center', alpha=0.4)
plt.bar(x_pos+width, performance, width, align='edge', alpha=0.6,color='g')

plt.xticks(x_pos+width, people,fontproperties=myfont,rotation=45)
plt.xlabel(u'ȫ�����ۼ�װ��������MW',fontproperties=myfont)
plt.grid()
#plt.title('How fast do you want to go today?')

#plt.savefig(u'ȫ�����ۼ�װ������',format='pdf',dpi=600)
plt.savefig('aa.svg',format='svg',dpi=600)
plt.show()

