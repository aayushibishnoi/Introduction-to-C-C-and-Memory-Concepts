#!/bin/bash

# Test script for Introduction to C/C++ and Memory Concepts

# Check if g++ is installed
echo "Checking for g++ compiler..."
if ! command -v g++ >/dev/null 2>&1; then
    echo "FAIL: g++ not found. Install it with 'sudo apt install g++'."
    exit 1
fi
echo "PASS: g++ found"

# Compile the C++ program
echo "Compiling memory_intro.cpp..."
g++ memory_intro.cpp -o memory_intro
if [ $? -eq 0 ]; then
    echo "PASS: Compilation successful"
else
    echo "FAIL: Compilation failed"
    exit 1
fi

# Run the program and capture output
echo "Running memory_intro..."
./memory_intro > output.txt

# Test 1: Check variable declarations
echo "Testing variable declarations..."
if grep -q "Integer variable: 42" output.txt && \
   grep -q "Character variable: A" output.txt && \
   grep -q "Double variable: 3.14" output.txt; then
    echo "PASS: Variables correctly declared and printed"
else
    echo "FAIL: Variable output incorrect"
fi

# Test 2: Check memory addresses
echo "Testing memory addresses..."
if grep -q "Address of integerVar" output.txt; then
    echo "PASS: Memory addresses printed"
else
    echo "FAIL: Memory addresses not printed"
fi

# Test 3: Check byte-level memory usage
echo "Testing byte-level memory usage..."
if grep -q "Size of int: 4 bytes" output.txt && \
   grep -q "Size of char: 1 byte" output.txt && \
   grep -q "Size of double: 8 bytes" output.txt; then
    echo "PASS: Correct memory sizes for data types"
else
    echo "FAIL: Incorrect memory sizes"
fi

# Clean up
rm -f memory_intro output.txt

echo "All tests completed!"
