%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Initialisation file for squirrel-Cage Induction Machine with Deep Bar Effect      %
%                          RMS model
%                           Last Update 06.06.2002 by FI                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%base angular speed
omg_base=2*pi*rated_fp(1);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Stator winding
%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Stator resistance
Rs=stator(1);

%Stator leakage inductance
Xsgm_s= stator(2);

%Stator self-inductance
Xs=Xsgm_s+Xm;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Rotor winding
%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Rotor resistance for rated operating point
Rr=rotor(1); 

%Rotor leakage inductance for rated operating point
Xsgm_r=rotor(2);

%Rotor self-inductance
Xr=Xsgm_r+Xm;

%Number of pole pairs
p=rated_fp(2);

%Breakdown slip
sbd=Rr*sqrt((Rs^2+Xs^2)/((Xm^2-Xs*Xr)^2+(Rs*Xr)^2));

%rotor resistance at start_up
Rr_sc=(rated_vi(1)*sqrt(1/(1+(tan(standstill(2)*pi/180))^2))/standstill(1)/rated_vi(2)-Rs);

%rotor resistance displacement factor
kr=Rr_sc/Rr;

%rotor reactance displacement factor
kx=(tan(standstill(2)*pi/180)*(Rs+Rr_sc)-Xsgm_s)/Xsgm_r;
