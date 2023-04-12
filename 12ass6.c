#include <stdio.h>

void separateEvenOdd(int arr[], int size, int even[], int odd[]) {
    int evenIndex = 0;
    int oddIndex = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex++] = arr[i];
        } else {
            odd[oddIndex++] = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even[size];
    int odd[size];
    
    separateEvenOdd(arr, size, even, odd);
    
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Even Array: ");
    for (int i = 0; i < size && even[i] != 0; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    
    printf("Odd Array: ");
    for (int i = 0; i < size && odd[i] != 0; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    
    return 0;
}

//output
Enter the size of the array: 6
Enter the elements of the array: 2 4 7 9 10 11
Even elements: 2 4 10 
Odd elements: 7 9 11 
