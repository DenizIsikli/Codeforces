#!/bin/bash

# Check if the user provided a file name
if [ -z "$1" ]; then
  echo "Usage: $0 <path_to_cpp_file>"
  exit 1
fi

# Get the file name without extension
filename=$(basename -- "$1")
filename_without_extension="${filename%.*}"

# Compile the C++ file with the desired C++ standard
g++ -std=c++20 -o "$filename_without_extension" "$1" template.h

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful. Running the program..."
  ./"$filename_without_extension"
else
  echo "Compilation failed."
fi
