@echo OFF

WHERE python
IF %ERRORLEVEL% NEQ 0 ECHO python wasn't found 
IF %ERRORLEVEL% NEQ 0 PAUSE
IF %ERRORLEVEL% NEQ 0 EXIT

CLS

set /p choice= "Type in new module's name :" 
python rename.py %choice%
PAUSE
DEL "./rename.py"
DEL "%~f0"