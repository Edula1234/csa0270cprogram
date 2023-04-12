#include <stdio.h>

void findLargestTwo(int arr[], int size) {
    int firstLargest = arr[0];
    int secondLargest = arr[1];

    // Finding the largest and second largest elements
    for (int i = 2; i < size; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    printf("The FIRST LARGEST = %d\n", firstLargest);
    printf("THE SECOND LARGEST = %d\n", secondLargest);
}

int main() {
    int arr1[] = {2, 4, 5, 8, 7}; // Example array with unique elements
    int arr2[] = {2, 1, 1, 2, 1, 2}; // Example array with recurring elements

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Finding largest two numbers in an array with unique elements:\n");
    findLargestTwo(arr1, size1);

    printf("\nFinding largest two numbers in an array with recurring elements:\n");
    findLargestTwo(arr2, size2);

    return 0;
}

//output
Finding largest two numbers in an array with unique elements:
The FIRST LARGEST = 8
THE SECOND LARGEST = 7

Finding largest two numbers in an array with recurring elements:
The FIRST LARGEST = 2
THE SECOND LARGEST = 1
