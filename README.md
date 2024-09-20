# Merge Sort Algorithm in C++

## Description
In this activity, students will implement the **Merge Sort** algorithm in C++, a powerful sorting method that uses the **divide and conquer** paradigm. Merge Sort works by repeatedly splitting the list into halves, recursively sorting each half, and then merging the sorted halves to produce the final sorted list.

## Algorithm Overview

### Merge Sort
- **Merge Sort** follows the divide-and-conquer strategy:
  1. **Divide**: Recursively divide the array into two halves until each subarray contains only one element (base case).
  2. **Conquer**: Recursively sort the two halves.
  3. **Merge**: Combine the two sorted halves into a single sorted array.

- The recursive nature of the algorithm makes it well-suited for larger datasets where it can outperform simpler sorting algorithms like Insertion or Selection Sort.

## Code Explanation
- The main function `mergeSort` recursively splits the array until each half contains a single element.
- The `merge` function then combines the sorted left and right halves, placing elements in the correct order.
- The code also includes an `imprimir` function to display the array before and after sorting.

### Time and Space Complexity
- **Time Complexity**: O(n log n) for all cases (best, average, and worst). This is because the array is split in half with each recursive call, and merging the two halves takes linear time.
- **Space Complexity**: O(n), due to the extra space needed to store the left and right halves during the merge process.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/merge-sort-algorithm
