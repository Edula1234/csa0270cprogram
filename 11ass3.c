#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Checking if the entered character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }
    
    return 0;
}

// output
enter a character: a
'a' is alphabet