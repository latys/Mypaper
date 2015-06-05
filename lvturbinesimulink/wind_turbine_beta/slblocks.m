function blkStruct = slblocks
%SLBLOCKS Defines the Simulink library block representation for the Wind Turbine Blockset.
%   Author: Florin Iov
%   Copyright 2002 
%   $Revision: 1.0 $  $Date: 1.06.2004

blkStruct.Name = ['Wind Turbine' sprintf('\n') 'Blockset beta'];

blkStruct.OpenFcn = 'wt_blockset_beta';

blkStruct.MaskDisplay = '';

% Define the library list for the Simulink Library browser.
% Return the name of the library model and the name for it
Browser(1).Library = 'wt_blockset_beta';
Browser(1).Name    = 'Wind Turbine Blockset beta';
Browser(1).IsFlat  = 0;% Is this library "flat" (i.e. no subsystems)?

blkStruct.Browser = Browser;

% End of slblocks


