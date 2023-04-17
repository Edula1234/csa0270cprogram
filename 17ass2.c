#include <stdio.h>

// Define structure for batting information
struct Player {
    char name[50];
    int runs;
};

int main() {
    int numPlayers;
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    // Declare an array of structures to store batting information
    struct Player players[numPlayers];

    // Input batting information for each player
    for (int i = 0; i < numPlayers; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf("%s", players[i].name);
        printf("Enter runs scored: ");
        scanf("%d", &players[i].runs);
    }

    // Calculate total runs scored by the team
    int totalRuns = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalRuns += players[i].runs;
    }

    // Display total runs scored by the team
    printf("\nTotal runs scored by the team: %d\n", totalRuns);

    return 0;
}
