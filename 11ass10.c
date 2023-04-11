#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimalNum) {
    int binaryNum[32]; // Array to store binary digits
    int i = 0; // Counter for binary array

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2; // Store remainder as binary digit
        decimalNum = decimalNum / 2; // Update decimal number
        i++; // Increment binary array counter
    }

    // Print binary number in reverse order
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;

    // Input decimal number from user
    printf("Input decimal number: ");
    scanf("%d", &decimalNum);

    // Call function to convert decimal to binary
    decimalToBinary(decimalNum);

    return 0;
}

//output
Input decimal number: 112
Binary number: 01110000
