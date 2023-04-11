#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    printf("Enter a string: ");
    gets(inputString); // gets() is used to read input string

    int count = 0; // Initialize count to 0
    for (int i = 0; i < strlen(inputString); i++) {
        char c = tolower(inputString[i]); // Convert character to lowercase for case-insensitive comparison
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++; // Increment count if character is a vowel
        }
    }

    printf("Number of vowels in the given string: %d\n", count);

    return 0;
}

//output
Enter a string: Hello World!
Number of vowels in the given string: 3
