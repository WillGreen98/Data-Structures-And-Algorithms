# Sorting-Algorithms

Sorting-Algorithms For CS Theory
I am trying to learn how to implement Sorting-Algorithms

| Sort                 | Average     | Best        | Worst       | Space    | Stability |
|----------------------|-------------|-------------|-------------|----------|-----------|
| Bubble-sort          | O(n^2)      | O(n^2)      | O(n^2)      | Constant | Stable    |
| Modified-Bubble-sort | O(n^2)      | O(n)        | O(n^2)      | Constant | Stable    |
| Selection-Sort       | O(n^2)      | O(n^2)      | O(n^2)      | Constant | Stable    |
| Insertion-Sort       | O(n^2)      | O(n)        | O(n^2)      | Constant | Stable    |
| Heap-Sort            | O(n*log(n)) | O(n*log(n)) | O(n*log(n)) | Constant | Unstable  |
| Merge-Sort           | O(n*log(n)) | O(n*log(n)) | O(n*log(n)) | Depends  | Stable    |
| Quick-sort           | O(n*log(n)) | O(n*log(n)) | O(n^2)      | Constant | Stable    |

## Remarks

* Bubble Sort
    - Always use a modified bubble sort

* Modified Bubble Sort
    - Stops after reaching a sorted array

* Selection Sort
    - Even a perfectly sorted input requires scanning the entire array

* Insertion Sort
    - In the best case (already sorted), every insert requires constant time

* Heap Sort
    - By using input array as storage for the heap, it is possible to achieve constant space

* Merge Sort
    - On arrays, merge sort requires O(n) space; on linked lists, merge sort requires constant space

* Quick-Sort
    - Randomly picking a pivot value (or shuffling the array prior to sorting) can help avoid worst case scenarios such as a perfectly sorted array.