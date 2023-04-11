#include <stdio.h>

int main() {
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int notes[8] = {500, 100, 50, 20, 10, 5, 2, 1}; // Denominations of notes
    int count[8] = {0}; // Array to store the count of each note

    for (int i = 0; i < 8; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount %= notes[i];
        }
    }

    printf("Total number of notes:\n");
    for (int i = 0; i < 8; i++) {
        if (count[i] > 0) {
            printf("%d: %d\n", notes[i], count[i]);
        }
    }

    return 0;
}

//output
Enter amount: 575
Total number of notes:
500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
2: 0
1: 0