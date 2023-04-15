#include <stdio.h>

int main() {
    char str[1000]; // assuming the input string has a maximum length of 1000 characters
    int sum = 0;

    printf("Enter the string: ");
    gets(str); // gets() function is used to read input string with spaces

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i]; // Add the ASCII value of the current character to the sum
    }

    printf("Sum of all characters: %d\n", sum);

    return 0;
}

//output
Enter the string: Welcome to Sanfoundry's C Programming Class, Welcome Again to C Class !
Sum of all characters: 6307
