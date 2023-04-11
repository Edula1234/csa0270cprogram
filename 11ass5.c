#include <stdio.h>

int main() {
    char ch;

    // Input character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}

//output
Enter a character: C
'C' is an uppercase alphabet.
