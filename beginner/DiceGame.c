#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

// Function to roll the dice
int roll_dice() {
    return (rand() % 6) + 1;
}

int main() {
    int balance = 1000, bet, guess, dice;

    srand(getpid()); // Seed the random number generator

    while (1) { // Main game loop
        printf("Your current balance: %d\n", balance);
        printf("Make your bet (or enter 0 to quit): ");
        fflush(stdout);
        if (scanf("%d", &bet) != 1 || bet < 0) {
            printf("Invalid input. Please enter a positive number.\n");
            continue;
        }

        if (bet == 0) { // Quit the game
            printf("You quit the game with a balance of: %d\n", balance);
            break;
        }

        if (bet > balance) { // Insufficient balance
            printf("You don't have enough money to bet.\n");
            continue;
        }

        printf("Make your guess (1 - 6): ");
        fflush(stdout);
        if (scanf("%d", &guess) != 1 || guess < 1 || guess > 6) {
            printf("Invalid input. Please enter a number between 1 and 6.\n");
            break;
        }

        dice = roll_dice(); // Roll the dice
        printf("The dice rolled: %d\n", dice);

        if (guess == dice) { // Player wins
            sleep(2);
            printf("Congratulations! You guessed correctly!\n");
            balance += bet * 3; // Triple the bet as a reward
        } else { // Player loses
            printf("Sorry, wrong guess.\n");
            balance -= bet;
        }

        if (balance <= 0) { // Check if the player is out of money
            printf("You have run out of money! Game over.\n");
            break;
        }
    }

    return 0;
}
