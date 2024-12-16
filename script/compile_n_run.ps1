# PowerShell Script to Compile and Run C++ Code

# Check if the user provided a file name
if (-not $args[0]) {
    Write-Host "Usage: .\compile_and_run.ps1 <path_to_cpp_file>" -ForegroundColor Red
    exit 1
}

# Get the script directory (where this script is located)
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Definition

# Define the 'executables' directory path within the script directory
$executablesDir = Join-Path $scriptDir "executables"

# Create the 'executables' directory if it doesn't exist
if (-not (Test-Path -Path $executablesDir)) {
    New-Item -ItemType Directory -Path $executablesDir | Out-Null
}

# Get the file name without extension
$sourceFile = $args[0]
$filename = Split-Path -Leaf $sourceFile
$filenameWithoutExt = [System.IO.Path]::GetFileNameWithoutExtension($filename)

# Define the output executable path
$outputExecutable = Join-Path $executablesDir "$filenameWithoutExt.exe"

# Compile the C++ file with g++
Write-Host "Compiling $sourceFile..." -ForegroundColor Cyan
g++ -std=c++20 -o $outputExecutable $sourceFile

# Check if the compilation was successful
if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilation successful!" -ForegroundColor Green
    Write-Host "Executable saved to $outputExecutable" -ForegroundColor Yellow
    Write-Host "Running the program..." -ForegroundColor Cyan

    # Run the executable
    & $outputExecutable
}
else {
    Write-Host "Compilation failed!" -ForegroundColor Red
}
