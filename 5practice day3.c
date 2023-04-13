#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int temp;
    int numDigits = 0;

    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum;

    while (num != 0) {
        temp = num % 10;
        sum += pow(temp, numDigits);
        num /= 10;
    }

    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a Perfect number\n", num);
    } else {
        printf("%d is not a Perfect number\n", num);
    }

    return 0;
}
