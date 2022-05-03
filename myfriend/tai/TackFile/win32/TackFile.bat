@ECHO OFF

SET LOGFILE="%~pn0.log"
SET ARFILES="pritai.tar" "pritai-dad.tar"
SET OUTDIR="%~pn0_out"

IF NOT EXIST %OUTDIR% (
    ECHO %DATE% %TIME% Running MKDIR ... >> %LOGFILE%
    MKDIR %OUTDIR% >NUL 2>&1
    IF ERRORLEVEL 1 (
        ECHO Error: Cannot create an output folder, stopped. 1>&2
        EXIT 1
    ) ELSE (
        ECHO Extracting to the folder: %OUTDIR%
    )
)

FOR %%F IN (%ARFILES%) DO (
    IF EXIST %%F (
        tar -xf %%F -C %OUTDIR% >NUL 2>&1
        IF ERRORLEVEL 1 (
            ECHO Error: Cannot extract %%F, stopped. 1>&2
            EXIT 1
        )
    )
)

FOR %%F IN 

ECHO Done, eiei.

PAUSE