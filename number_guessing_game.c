#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, tries = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("=================================\n");
    printf("   NUMBER GUESSING GAME\n");
    printf("=================================\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("\nEnter your guess: ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        tries++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the number!\n");
            printf("Attempts: %d\n", tries);
        }

    } while (guess != number);

    return 0;
}