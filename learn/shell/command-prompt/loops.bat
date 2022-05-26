@ECHO OFF
LS
ECHO %ERRORLEVEL%
CD
ECHO %ERRORLEVEL%
ECHO %ERRORLEVEL%
dk
ECHO %ERRORLEVEL%
cd
ECHO %ERRORLEVEL%
:: SET FILES="pritai.tar" "pritai-dad.tar"
:: SET OUTDIR=%~pn0_out\
:: ECHO %OUTDIR%
:: 
:: IF NOT EXIST %OUTDIR% DO (
::     MKDIR  %OUTDIR%
:: )
:: 
:: FOR %%I IN (%FILES%) DO (
::     IF EXIST %%I (
::         ECHO %%I
::     ) ELSE (
::         ECHO %%I DOES NOT EXIST
::     )
:: )
:: PAUSE