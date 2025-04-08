# Sorting Algorithms Implementation in C++

## Overview
This project implements three common sorting algorithms (Bubble Sort, Selection Sort, and Quick Sort) using pointer arithmetic in C++. The code demonstrates different approaches to sorting an array of integers.

## Prerequisites
- C++ compiler (e.g., g++)
- Basic understanding of C++ programming and pointers

## File Structure
- `sorting_algorithms.cpp`: Contains the complete implementation

## Code Description
The program includes:

1. `swap` function:
   - Utility function to swap two integers using pointers

2. `bubbleSort` function:
   - Implements Bubble Sort algorithm
   - Time complexity: O(n²)
   - Space complexity: O(1)

3. `selectionSort` function:
   - Implements Selection Sort algorithm
   - Time complexity: O(n²)
   - Space complexity: O(1)

4. `quickSort` and `partition` functions:
   - Implements Quick Sort algorithm
   - Average time complexity: O(n log n)
   - Worst time complexity: O(n²)
   - Space complexity: O(log n) due to recursion

5. `printArray` function:
   - Utility function to display array contents

6. `main` function:
   - Demonstrates all three sorting algorithms with sample arrays

## Usage
1. Compile the code:
```bash
g++ sorting_algorithms.cpp -o sorting_algorithms
