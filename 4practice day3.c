#include <stdio.h>

int checkEvenOdd(int num) {
    if (num % 2 == 0)
        return 1; 
    else
        return 0;
}

int main() {
    int num;
    printf("Input any number: ");
    scanf("%d", &num); 

    int isEven = checkEvenOdd(num);
  
    if (isEven)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);

    return 0;
}
