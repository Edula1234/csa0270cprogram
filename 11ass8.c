#include <stdio.h>

int main() {
    int num, sum = 0, rem;
    
    // Input a number from the user
    printf("Enter any number: ");
    scanf("%d", &num);
    
    // Loop to calculate the sum of digits
    for (; num > 0; num /= 10) {
        rem = num % 10; // Get the last digit
        sum += rem;     // Add the last digit to the sum
    }
    
    // Output the sum of digits
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}

//output
Enter any number: 1234
Sum of digits: 10
