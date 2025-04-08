# Binary Search Implementation in C++

## Overview
This project contains an implementation of an iterative binary search algorithm in C++. Binary search is an efficient algorithm for finding a target value within a sorted array by repeatedly dividing the search interval in half.

## Prerequisites
- C++ compiler (e.g., g++)
- Basic understanding of C++ programming

## File Structure
- `binary_search.cpp`: Contains the complete implementation

## Code Description
The program consists of two main parts:

1. `binarySearchIterative` function:
   - Takes a sorted array, its size, and a target value as parameters
   - Returns the index of the target if found, -1 if not found
   - Uses iterative approach with while loop
   - Time complexity: O(log n)
   - Space complexity: O(1)

2. `main` function:
   - Demonstrates usage with a sample sorted array
   - Prints the result of the search

## Usage
1. Compile the code:
```bash
g++ binary_search.cpp -o binary_search
