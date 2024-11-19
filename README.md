_____________________________________________________________________________________________________________________________________________________________________
# algorithms-and-data-structures_ex3

The provided C++ code implements several functions, including a random number generator, a quicksort algorithm, and a function to find the maximum value in an array. 
The main function demonstrates these functionalities by sorting an array of integers.
Key Components
Random Number Generator:
The random(int min, int max) function generates a random integer between the specified min and max values. If the max is less than min, it swaps them to ensure 
the correct range is used. The function uses the rand() function to produce a pseudo-random number within the specified range.
Partition Function:
The partition(int a[], int L, int R) function is part of the quicksort algorithm. It selects a pivot (the first element of the array segment) and rearranges 
the elements so that those less than the pivot come before it and those greater come after. It returns the final position of the pivot.
Quicksort Algorithm:
The quicksort(int a[], int L, int R) function recursively sorts the array. It calls the partition function to divide the array and then sorts the two halves.
Finding Maximum Value:
The maximum(int a[], int n) function iterates through the array to find and return the maximum value.
Main Function:
In the main() function, an array t is defined, and its size is calculated. The maximum value of the array is found and assigned to the last element of the array.
The array is then sorted using the quicksort algorithm, and the sorted array is printed.
Code Execution
Here’s a brief explanation of how the code executes:
The array t is initialized with ten integers.
The size of the array is calculated, and the maximum value is stored in the last position of the array.
The quicksort function is called to sort the array.
Finally, the sorted array is printed to the console.
