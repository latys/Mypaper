function blkStruct = slblocks
%SLBLOCKS Defines the Simulink library block representation for the Wind Turbine Blockset.
%   Author: Florin Iov
%   Copyright 2005 
%   $Revision: 1.0 $  $Date: 26.05.2005

blkStruct.Name = ['Wind Turbine' sprintf('\n') 'Blockset v3.0'];

blkStruct.OpenFcn = 'wt_blockset_v3';

blkStruct.MaskDisplay = '';

% Define the library list for the Simulink Library browser.
% Return the name of the library model and the name for it
Browser(1).Library = 'wt_blockset_v3';
Browser(1).Name    = 'Wind Turbine Blockset v3.0';
Browser(1).IsFlat  = 0;% Is this library "flat" (i.e. no subsystems)?

blkStruct.Browser = Browser;

% End of slblocks


