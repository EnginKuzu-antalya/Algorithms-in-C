# Sorting Algorithms Implementation in C

This repository contains fundamental **Sorting Algorithms** implemented in C. These algorithms are essential for understanding computational logic, time complexity, and data organization.

-----

## Overview of Algorithms

The project focuses on comparison-based sorting techniques, providing step-by-step iteration outputs to visualize how data moves during the sorting process.

--------

## 1. Insertion Sort

Insertion Sort builds the final sorted array one item at a time. it is much less efficient on large lists than more advanced algorithms.

*   **Logic:** It takes each element from the unsorted part and finds its appropriate position in the sorted part by shifting elements.
*   **Implementation Details:** 
    *   Uses a nested loop structure to compare and swap adjacent elements.
    *   Prints the state of the array after each iteration to show progress.
*   **Time Complexity:** 
    *   Best Case: $O(n)$
    *   Average/Worst Case: $O(n^2)$

----------

## 2. Selection Sort

Selection Sort is an in-place comparison-based algorithm in which the list is divided into two parts: the sorted part at the left end and the unsorted part at the right end.

*   **Logic:** It repeatedly finds the minimum element from the unsorted part and puts it at the beginning of the sorted part.
*   **Implementation Details:** 
    *   Maintains a `key` (index) to track the minimum value found in each pass.
    *   Swaps the found minimum with the first element of the unsorted section.
*   **Time Complexity:** 
    *   All Cases: $O(n^2)$

------------


## Tech

*   **Language:** C
*   **Concepts:** Array Manipulation, Nested Loops, Swap Logic, Algorithm Visualization

---
