@ECHO OFF

LSs >NUL 2>&1

IF NOT ERRORLEVEL 1 (
    ECHO Success.
) ELSE (
    ECHO Failed.
)

PAUSE