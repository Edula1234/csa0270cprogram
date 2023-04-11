#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Counting the number of digits using loop
    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}

//output
Enter a number: 35419
Number of digits: 5
