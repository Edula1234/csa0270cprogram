#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is divisible by 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Number is divisible by 5 and 11\n");
    } else {
        printf("Number is not divisible by 5 and 11\n");
    }

    return 0;
}

//output
Enter a number: 55
Number is divisible by 5 and 11
