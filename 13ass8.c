#include <stdio.h>
#include <string.h>

// Function to swap characters at two indices in a string
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to print all permutations of a string
void printPermutations(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap((str + start), (str + i));
            printPermutations(str, start + 1, end);
            swap((str + start), (str + i)); // backtrack
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("All possible permutations are:\n");
    printPermutations(str, 0, n - 1);
    return 0;
}

//output
Enter a string: SAN
All possible permutations are:
SAN
SNA
ASN
ANS
NAS
NSA
