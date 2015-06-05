clear
clc

function Cp=lv_Cpfile(lambda,bate)

lambda=input('lambda=');
bate=input('bate=');
Cp=(0.44-0.0167*bate)*sin(pi*(lambda-3)/(15-0.3*bate))-0.00184*(lambda-3)*bate;

sim('lv_Cpfile')