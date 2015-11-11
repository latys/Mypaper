 #######################################################
 Installation Procedure for "Wind Turbine Blockset V3.0"
 #######################################################

 Version for Matlab 7.0.0 / (Service Pack 1) & Simulink 5.1

 Basically all the important models uses only Simulink blocks.
 However some models (measurement models) uses blocks from "DSP Blockset".

 Installation Procedure
 
 1. save the WTB_v3.change file to your hard-disk;
 2. change the extension from *.change to *.zip
 3. unzip this file
 4. copy the entire folder WTB_v3 somewhere on your hard-disk. 
	A good location is <matlab root>\toolbox\
 5. launch Matlab
 6. go to File-> SetPath..
 7. press "Add Folder with subfolders" button
 8. browse for the folder WTB_v3 and press "OK"
 9. press "Save" button and then close
10. open Simulink and the toolbox should appear somewhere at the bottom of the Simulink Toolboxes list

Note: Keep the Matlab path for this folder in top of the path list.

Some users might have problems with the Character Encoding function.
In this case run the following lines in Matlab Command Window 

bdclose all; 
set_param(0,'CharacterEncoding','ISO-8859-1');

The matlab options are:

US-ASCII
UTF-8
Shift_JIS
ISO-8859-1

For further informations check the Matlab help
 