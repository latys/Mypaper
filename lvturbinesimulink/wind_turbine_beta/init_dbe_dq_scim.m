%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Initialisation file for squirrel-Cage Induction Machine with Deep Bar Effect      %
%                          Last Update 15.05.2002 by FI                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%base angular speed
omg_base=2*pi*rated_fp(1);

%Magnetizing reactance
Xm=omg_base*Lm;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Stator winding
%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Stator resistance
Rs=stator(1);

%Stator leakage inductance
Lsgms= stator(2);
Xsgm_s=omg_base*Lsgms;

%Stator self-inductance
Lss=Lsgms+Lm;
Xs=omg_base*Lss;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Rotor winding
%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Rotor resistance for rated operating point
Rr=rotor(1); 

%Rotor leakage inductance for rated operating point
Lsgmr=rotor(2);
Xsgm_r=omg_base*rotor(2);

%Rotor self-inductance
Lsr=rotor(2)+Lm;
Xr=omg_base*Lsr;

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
