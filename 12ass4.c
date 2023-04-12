#include <stdio.h>

int findMaxDifference(int arr[], int size) {
    int maxDiff = arr[1] - arr[0]; // Initialize maxDiff with the difference between first two elements
    int minElement = arr[0]; // Initialize minElement with the first element
    
    for (int i = 1; i < size; i++) {
        if (arr[i] - minElement > maxDiff) {
            maxDiff = arr[i] - minElement; // Update maxDiff if a larger difference is found
        }
        if (arr[i] < minElement) {
            minElement = arr[i]; // Update minElement if a smaller element is found
        }
    }
    
    return maxDiff;
}

int main() {
    int array[] = {10, 15, 90, 200, 110};
    int size = sizeof(array) / sizeof(array[0]);
    
    int maxDifference = findMaxDifference(array, size);
    
    printf("Maximum difference is %d\n", maxDifference);
    
    return 0;
}

//output
Maximum difference is 190
