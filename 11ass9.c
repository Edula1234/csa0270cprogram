#include <stdio.h>

int main() {
    int num, originalNum, remainder, reverse = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store original number for later comparison

    // Find reverse of the given number
    for (; num != 0; num /= 10) {
        remainder = num % 10; // Get the last digit
        reverse = reverse * 10 + remainder; // Append the last digit to reverse
    }

    printf("Reverse of %d = %d\n", originalNum, reverse);

    return 0;
}

//output
Enter a number: 12345
Reverse of 12345 = 54321
