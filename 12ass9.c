#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, max_index;

    for (i = 0; i < n - 1; i++) {
        max_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        if (max_index != i) {
            swap(&arr[i], &arr[max_index]);
        }
    }
}

int main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the numbers:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The numbers arranged in descending order are given below:\n");

    selectionSort(arr, N);

    for (i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

//output
Enter the value of N: 5
Enter the numbers:
234
780
130
56
90
The numbers arranged in descending order are given below:
780
234
130
90
56
