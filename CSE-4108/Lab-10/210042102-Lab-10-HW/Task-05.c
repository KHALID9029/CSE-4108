#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int roll_dice(void)
{
    return rand() % 6 + rand() % 6 + 2;
}
bool play_game(void)
{
    int dice = roll_dice();
    int point;
    printf("You rolled: %d\n", dice);
    if (dice == 7 || dice == 11)
    {
        printf("You win!\n\n");
        return true;
    }
    if (dice == 2 || dice == 3 || dice == 12)
    {
        printf("You lose!\n\n");
        return false;
    }
    printf("Your point is %d\n", point = dice);

    while (dice = roll_dice())
        {
            printf("You rolled: %d\n", dice);

            if (dice == point) {printf("You win!\n\n");
            return true;}
            if (dice == 7) {
            printf("You lose!\n\n");
            return false;}
        }
}


int main()
{
    int wins = 0,
    losses = 0;
    char c;
    srand((unsigned) time(NULL));
    while(1)
        {
            if (play_game())
            wins++;
            else
            losses++;

        printf("Play again? ");
        scanf(" %c", &c);
        if (c != 'y' && c != 'Y')
             break;
        printf("\n");
    }

    printf("\nWins: %2d  Losses: %2d\n", wins, losses);

    return 0;
}

