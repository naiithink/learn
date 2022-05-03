@ECHO OFF

SET ARFILESAR
SET /A IND=0
SET /P ARFILES="Input files: "

FOR %%F IN (%ARFILES%) DO (
    SET ARFILESAR[%IND%]=%%F
    SET /A IND+=1
)

ECHO Total files: %IND%
SET /P "Is that right?: "
SET 

IF NOT DEFINED %ARFILES[1]% (
    ECHO Error: no input file. 1>&2
    EXIT 1
)

PAUSE