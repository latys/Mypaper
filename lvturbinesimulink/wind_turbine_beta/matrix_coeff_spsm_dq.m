%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Matrix coefficients for DQ model of Salient-Pole Synchronous Machine %
%                   Last Update 10.05.2002                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Stator winding
Rs=stator_winding(1); Lsgm_s=stator_winding(2);

%Field winding
Rf=field_winding(1); Lsgm_f=field_winding(2);

%Rotor winding D axis
Rrd=rotor_winding(1); Lsgm_rd=rotor_winding(2);

%Rotor windin Q axis
Rrq=rotor_winding(3); Lsgm_rq=rotor_winding(4);

%Magnetizing inductances DQ axis
Lmd=mag_ind(1); Lmq=mag_ind(2);

%Self Inductances
Lssd=Lsgm_s+Lmd;
Lssq=Lsgm_s+Lmq;
Lsf=Lsgm_f+Lmd;
Lsrd=Lsgm_rd+Lmd;
Lsrq=Lsgm_rq+Lmq;

%Coeffients
Ksgm_d=Lsgm_s*Lsgm_f*Lsgm_rd+Lmd*(Lsgm_s*Lsgm_f+Lsgm_f*Lsgm_rd+Lsgm_rd*Lsgm_s);
Ksgm_q=Lsgm_s*Lsgm_rq+Lmq*(Lsgm_s+Lsgm_rq);

Ksgm_frd=Lsgm_f*Lsgm_rd+Lmd*(Lsgm_f+Lsgm_rd);
Ksgm_srd=Lsgm_s*Lsgm_rd+Lmd*(Lsgm_s+Lsgm_rd);
Ksgm_sf=Lsgm_f*Lsgm_s+Lmd*(Lsgm_f+Lsgm_s);

%Matrix coefficients
a11=-Rs*Ksgm_frd/Ksgm_d;
a12=Lssq*Ksgm_frd/Ksgm_d;
a13=Rf*Lsgm_rd*Lmd/Ksgm_d;
a14=Rrd*Lsgm_f*Lmd/Ksgm_d;
a15=Lmq*Ksgm_frd/Ksgm_d;
a16=Ksgm_frd/Ksgm_d;
a17=-Lsgm_rd*Lmd/Ksgm_d;

a21=-Lssd*Lsrq/Ksgm_q;
a22=-Rs*Lsrq/Ksgm_q;
a23=-Lsrq*Lmd/Ksgm_q;
a24=-Lsrq*Lmd/Ksgm_q;
a25=Rrq*Lmq/Ksgm_q;
a26=Lsrq/Ksgm_q;

a31=+Rs*Lsgm_rd*Lmd/Ksgm_d;
a32=-Lssq*Lsgm_rd*Lmd/Ksgm_d;
a33=-Rf*Ksgm_srd/Ksgm_d;
a34=Rrd*Lsgm_s*Lmd/Ksgm_d;
a35=-Lsgm_rd*Lmd*Lmq/Ksgm_d;
a36=-Lsgm_rd*Lmd/Ksgm_d;
a37=Ksgm_srd/Ksgm_d;

a41=Rs*Lsgm_f*Lmd/Ksgm_d;
a42=-Lsgm_f*Lssq*Lmd/Ksgm_d;
a43=Rf*Lsgm_s*Lmd/Ksgm_d;
a44=-Rrd*Ksgm_sf/Ksgm_d;
a45=-Lsgm_f*Lmd*Lmq/Ksgm_d;
a46=-Lsgm_f*Lmd/Ksgm_d;
a47=-Lsgm_s*Lmd/Ksgm_d;

a51=Lssd*Lmq/Ksgm_q;
a52=Rs*Lmq/Ksgm_q;
a53=Lmd*Lmq/Ksgm_q;
a54=Lmd*Lmq/Ksgm_q;
a55=-Rrq*Lssq/Ksgm_q;
a56=-Lmq/Ksgm_q;
