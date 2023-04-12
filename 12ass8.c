#include <stdio.h>

// Function to count the frequency of each element in the array
void countFrequency(int arr[], int size) {
    int frequency[size]; // Array to store frequency
    int visited = -1; // Mark elements that are visited

    // Initialize frequency array with 0
    for (int i = 0; i < size; i++) {
        frequency[i] = 0;
    }

    // Loop through the array
    for (int i = 0; i < size; i++) {
        int count = 1; // Count the frequency of current element

        // Skip elements that are already visited
        if (arr[i] == visited) {
            continue;
        }

        // Count the frequency of current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = visited; // Mark visited element
            }
        }

        // Store the frequency of current element
        frequency[i] = count;
    }

    // Display the frequency of each element
    printf("Element\tFrequency\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] != visited) {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }
}

int main() {
    int arr[] = {2, 3, 4, 2, 3, 5, 3, 4, 6, 7, 8, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countFrequency(arr, size);

    return 0;
}

//output
Array elements: 2 3 4 2 3 5 3 4 6 7 8 5 6 7 8 9 
Element	Frequency
2       2
3       3
4       2
5       2
6       2
7       2
8       2
9       1
