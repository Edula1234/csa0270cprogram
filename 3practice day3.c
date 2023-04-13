#include <stdio.h>

int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
  
int findMinimum(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);

    int maximum = findMaximum(num1, num2);
    int minimum = findMinimum(num1, num2);

    // Print the results
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
