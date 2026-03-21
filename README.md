# Sorting Algorithms Implementation in C

This repository contains fundamental **Sorting Algorithms** implemented in C. These algorithms are essential for understanding computational logic, time complexity, and data organization.

-----

## Overview of Algorithms

The project focuses on comparison-based sorting techniques, providing step-by-step iteration outputs to visualize how data moves during the sorting process.

--------

## 1. Insertion Sort

Insertion Sort builds the final sorted array one item at a time. it is much less efficient on large lists than more advanced algorithms[cite: 9].

*   **Logic:** It takes each element from the unsorted part and finds its appropriate position in the sorted part by shifting elements[cite: 9].
*   **Implementation Details:** 
    *   Uses a nested loop structure to compare and swap adjacent elements[cite: 9].
    *   Prints the state of the array after each iteration to show progress[cite: 9].
*   **Time Complexity:** 
    *   Best Case: $O(n)$
    *   Average/Worst Case: $O(n^2)$

----------

## 2. Selection Sort

Selection Sort is an in-place comparison-based algorithm in which the list is divided into two parts: the sorted part at the left end and the unsorted part at the right end[cite: 10].

*   **Logic:** It repeatedly finds the minimum element from the unsorted part and puts it at the beginning of the sorted part[cite: 10].
*   **Implementation Details:** 
    *   Maintains a `key` (index) to track the minimum value found in each pass[cite: 10].
    *   Swaps the found minimum with the first element of the unsorted section[cite: 10].
*   **Time Complexity:** 
    *   All Cases: $O(n^2)$

------------

## How to Run

1.  Clone the repository.
2.  Navigate to the sorting directory.
3.  Compile using `gcc`:
    ```bash
    gcc insertion_sort.c -o insertion
    gcc selection_sort.c -o selection
    ```
4.  Execute the programs:
    ```bash
    ./insertion
    ./selection
    ```

------------

## Tech

*   **Language:** C
*   **Concepts:** Array Manipulation, Nested Loops, Swap Logic, Algorithm Visualization

---
