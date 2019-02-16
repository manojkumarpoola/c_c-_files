#include <stdio.h>
int main()
{
    int playerTotal = 0;
    int teamTotal = 0;
    int score;
    int numgames, player, bowler, game;

    printf ("no.of games?\n");
    scanf ("%d", &numgames);
    printf ("no.of players?\n");
    scanf ("%d", &player);

    for (bowler = 1;bowler <= 3;bowler++)
       {
        for (game = 1;game <= 2; game++)
           {
        printf ("\nEnter the score for game %d for bowler %d ", game, bowler);
        scanf ("%d", &score);

        playerTotal += score;
           }
        printf ("\nThe average for bowler %d is ", bowler, playerTotal/2);

        printf ("\nThe total for the game is", teamTotal);

        teamTotal += playerTotal;
       }


   return 0;
}


