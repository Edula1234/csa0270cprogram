#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove trailing newline from fgets

    int freq[256] = {0}; // to store frequency of each character (ASCII characters)

    // Count frequency of each character in the string
    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    char maxChar = ' ';
    int maxFreq = 0;

    // Find the character with highest frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Max repeated character in the string: %c\n", maxChar);
    printf("It occurs %d times\n", maxFreq);

    return 0;
}

//output
Enter a string: Welcome to Sanfoundry's C Programming Class !
Max repeated character in the string: o
It occurs 4 times
