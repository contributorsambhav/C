#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower = 1, upper = 100;
    int secretNumber = (rand() % (upper - lower + 1)) + lower;
    
    int guess, attempts = 0;
    srand(time(0));  // Seed the random number generator
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess a number between %d and %d.\n", lower, upper);
    
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secretNumber)
        {
            printf("Try higher!\n");
        }
        else if (guess > secretNumber)
        {
            printf("Try lower!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
        }
    } while (guess != secretNumber);
    
    int bye;
    printf("Press any key to close the terminal");
    scanf("%d",&bye);
    return 0;


}
