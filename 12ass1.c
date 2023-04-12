#include <stdio.h>

int main() {
    int Arr[5] = {12, 56, 34, 78, 100}; // Example array
    int size = sizeof(Arr) / sizeof(Arr[0]); // Calculating the size of the array
    int max = Arr[0]; // Initializing max with the first element of the array

    // Finding the largest element
    for (int i = 1; i < size; i++) {
        if (Arr[i] > max) {
            max = Arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max); // Printing the largest element

    return 0;
}

//output
The largest element in the array is: 100
