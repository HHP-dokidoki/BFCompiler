@echo off
setlocal enabledelayedexpansion

set "ROOT=%~dp0"
set "COMPILER=%ROOT%\examples\bf-compiler.exe"
set "EXAMPLES=%ROOT%\examples"
set "WORKDIR=%ROOT%\Temp"

if not exist "%WORKDIR%" mkdir "%WORKDIR%"
if not exist "%WORKDIR%\run_program.bat" (
    >"%WORKDIR%\run_program.bat" echo @echo off
    >>"%WORKDIR%\run_program.bat" echo type "%%~1" ^| "%%~2" ^> "%%~3"
)

set "PASS=0"
set "FAIL=0"

for /l %%i in (1,1,9) do (
    if exist "%EXAMPLES%\%%i.bf" (
        echo [%%i] compiling...
        powershell -NoProfile -Command "$sw=[Diagnostics.Stopwatch]::StartNew(); & '%COMPILER%' '%EXAMPLES%\%%i.bf' -o '%WORKDIR%\%%i.exe'; $code=$LASTEXITCODE; $sw.Stop(); [IO.File]::WriteAllText('%WORKDIR%\%%i.compile.ms', $sw.ElapsedMilliseconds.ToString()); exit $code"
        if errorlevel 1 (
            echo [%%i] compile failed
            set /a FAIL+=1
        ) else (
            set /p COMPILE_MS=<"%WORKDIR%\%%i.compile.ms"
            echo [%%i] compile time: !COMPILE_MS! ms
            set "TEST_EXE=%WORKDIR%\%%i.exe"
            if not exist "!TEST_EXE!" (
                if exist "%ROOT%%%i.exe" set "TEST_EXE=%ROOT%%%i.exe"
            )
            if not exist "!TEST_EXE!" (
                if exist "%EXAMPLES%\%%i.exe" set "TEST_EXE=%EXAMPLES%\%%i.exe"
            )
            if not exist "!TEST_EXE!" (
                echo [%%i] missing exe file
                set /a FAIL+=1
            ) else (
            echo [%%i] running...
                powershell -NoProfile -Command "$sw=[Diagnostics.Stopwatch]::StartNew(); & '%WORKDIR%\run_program.bat' '%EXAMPLES%\%%i.in' '!TEST_EXE!' '%WORKDIR%\%%i.actual'; $code=$LASTEXITCODE; $sw.Stop(); [IO.File]::WriteAllText('%WORKDIR%\%%i.run.ms', $sw.ElapsedMilliseconds.ToString()); exit $code"
                if errorlevel 1 (
                    echo [%%i] failed
                    set /a FAIL+=1
                ) else (
                    set /p RUN_MS=<"%WORKDIR%\%%i.run.ms"
                    powershell -NoProfile -Command "$e = [IO.File]::ReadAllText('%EXAMPLES%\%%i.out').TrimEnd(); $a = [IO.File]::ReadAllText('%WORKDIR%\%%i.actual').TrimEnd(); if ($e -ceq $a) { exit 0 } else { exit 1 }"
                    if errorlevel 1 (
                        echo [%%i] failed
                        set /a FAIL+=1
                    ) else (
                        echo [%%i] run time: !RUN_MS! ms
                        echo [%%i] passed
                        set /a PASS+=1
                    )
                )
            )
        )
    ) else (
        echo [%%i] missing bf file
        set /a FAIL+=1
    )
)

echo.
echo Pass: !PASS!
echo Fail: !FAIL!

endlocal
