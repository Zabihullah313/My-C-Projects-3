#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, computer_choice;
    int user_wins = 0, computer_wins = 0;

    srand(time(NULL));


    while (1) {
        printf("Enter 0 for Rock, 1 for Paper, 2 for Scissors: ");
        scanf("%d", &user_choice);

        computer_choice = rand() % 3;

        int difference = (user_choice - computer_choice + 3) % 3;

        if (difference == 1) {
            printf("You win!\n");
            user_wins++;
        }
        else if (difference == 2) {
            printf("Computer wins!\n");
            computer_wins++;
        }
        else {
            printf("It's a tie!\n");
        }


        printf("To continue press c and press any keys to quit: ");
        char again;
        scanf(" %c", &again);
        if (again != 'c') {
            break;
        }
    }

    printf("\nThanks for playing! You won %d times, computer won %d times.\n", user_wins, computer_wins);

    return 0;
}
