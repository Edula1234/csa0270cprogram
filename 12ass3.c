#include <stdio.h>

void findSecondLargestSmallest(int arr[], int size) {
    int i, temp;
    
    // Sort the array in descending order using bubble sort
    for (i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int secondLargest = arr[1];
    int secondSmallest = arr[size - 2];
    float average = (secondLargest + secondSmallest) / 2.0;
    int found = 0;

    // Check if the average is present in the array
    for (i = 0; i < size; i++) {
        if (arr[i] == average) {
            found = 1;
            break;
        }
    }

    printf("Sorted Array in descending order: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSecond Largest Element: %d\n", secondLargest);
    printf("Second Smallest Element: %d\n", secondSmallest);
    printf("Average of Second Largest and Second Smallest: %.2f\n", average);
    
    if (found) {
        printf("The average %.2f is found in the given array.\n", average);
    } else {
        printf("The average %.2f is not found in the given array.\n", average);
    }
}

int main() {
    int arr[] = {12, 56, 34, 78, 100}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargestSmallest(arr, size);

    return 0;
}

//output 
Sorted Array in descending order: 100 78 56 34 12
Second Largest Element: 78
Second Smallest Element: 34
Average of Second Largest and Second Smallest: 56.00
The average 56.00 is found in the given array.
