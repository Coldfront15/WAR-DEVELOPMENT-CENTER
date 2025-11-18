@echo off
REM start.bat - open a new terminal and run the repo-specific hemtt
REM This script releasees a new cmd window and executes:
REM    D:\A3WorkDrive\wdc\hemtt.exe release

REM Change to the script directory (repo root)
CD /D "%~dp0"

SET "HEMTT_PATH=D:\A3WorkDrive\wdc\hemtt.exe"

IF EXIST "%HEMTT_PATH%" (
    echo Opening new terminal and running: %HEMTT_PATH% release
    REM start a new cmd window, run the command and keep the window open after completion
    start "HEMTT" cmd /k ""%HEMTT_PATH%" release %*"
) ELSE (
    echo ERROR: hemtt.exe not found at %HEMTT_PATH%
    echo Please place hemtt.exe at that path or update the script, then re-run.
    pause
)
