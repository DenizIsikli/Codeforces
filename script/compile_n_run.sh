#!/bin/bash

# Check if the user provided a file name
if [ -z "$1" ]; then
  echo "Usage: $0 <path_to_cpp_file>"
  exit 1
fi

# Get the script directory (where this script is located)
script_dir="$(cd "$(dirname "$0")" && pwd)"

# Define the 'executables' directory path within the script directory
executables_dir="$script_dir/executables"

# Create the 'executables' directory if it doesn't exist
mkdir -p "$executables_dir"

# Get the file name without extension
filename=$(basename -- "$1")
filename_without_extension="${filename%.*}"

# Define the output executable path
output_executable="$executables_dir/$filename_without_extension"

# Compile the C++ file with the desired C++ standard
g++ -std=c++20 -o "$output_executable" "$1" template.h

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful"
  echo "Executable saved to $output_executable"
  echo "Running the program"
  "$output_executable"
else
  echo "Compilation failed"
fi
