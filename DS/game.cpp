#include <stdio.h>

int main() {
    char player1, player2;

    printf("Enter Player 1's choice (R/P/S): ");
    scanf(" %c", &player1); 
    
    printf("Enter Player 2's choice (R/P/S): ");
    scanf(" %c", &player2); 
    
    if (player1 == player2) {
        
        printf("It's a tie!\n");
    }
     else if ((player1 == 'R' && player2 == 'S') || 
               (player1 == 'S' && player2 == 'P') || 
               (player1 == 'P' && player2 == 'R')) {

        printf("Player 1 Wins!\n");

    } 
    else {

        printf("Player 2 Wins!\n");
    }

    return 0;
}