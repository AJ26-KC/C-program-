/*
Name:Konga Jematian Alice 
Reg no:PA106/G/28717/25
Description:c program for gaming
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(NULL));
    secretNumber = rand() % 20 + 1;  // Random number from 1 to 20

    printf("Guess the secret number between 1 and 20:\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess > secretNumber) {
            printf("Too high!\n");
        } else if(guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it right.\n");
            break;
        }
    }

    printf("It took you %d attempts.\n", attempts);
    return 0;
}

     