#include <stdio.h>

// Function to reverse a string
void reverseString(char *str) {
    char *start = str;
    char *end = str;
    char temp;

    // Move the end pointer to the end of the string
    while (*end != '\0') {
        end++;
    }
    end--;

    // Swap characters at start and end pointers, and move them towards each other
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter any String :: ");
    scanf("%s", str);

    printf("The Original String is :: %s\n", str);

    // Call the reverseString() function to reverse the string
    reverseString(str);

    printf("The Reverse of the String is :: %s\n", str);

    return 0;
}

//output
Enter any String :: Saveetha
The Original String is :: Saveetha
The Reverse of the String is :: ahteevaS
