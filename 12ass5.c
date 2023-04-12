#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce array size by 1
                j--; // Compensate for removed element
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 5, 4, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, n);

    printf("Resultant Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//output
Input Array: 1 2 4 5 4 2 7 5
Resultant Array after removing duplicates: 1 2 4 5 7
