@echo off

:: Check if the user provided a file name
if "%~1"=="" (
    echo Usage: %~nx0 ^<path_to_cpp_file^>
    exit /b 1
)

:: Get the script directory (where this script is located)
set "script_dir=%~dp0"

:: Define the 'executables' directory path within the script directory
set "executables_dir=%script_dir%executables"

:: Create the 'executables' directory if it doesn't exist
if not exist "%executables_dir%" (
    mkdir "%executables_dir%"
)

:: Get the file name without extension
for %%F in ("%~1") do (
    set "filename=%%~nF"
)

:: Define the output executable path
set "output_executable=%executables_dir%\%filename%.exe"

:: Compile the C++ file with the desired C++ standard
g++ -std=c++20 -o "%output_executable%" "%~1"

:: Check if the compilation was successful
if %ERRORLEVEL%==0 (
    echo Compilation successful
    echo Executable saved to "%output_executable%"
    echo Running the program...
    "%output_executable%"
) else (
    echo Compilation failed
)
