#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime number pairs that sum up to %d:\n", num);
    int count = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            count++;
        }
    }

    if (count == 0) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}

//output
Enter a positive integer: 34
Prime number pairs that sum up to 34:
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
