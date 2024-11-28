//Guessing game in C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int Min = 1;
    const int Max = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % Max) + Min;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", guess);

        if(guess < answer)
        {
            printf("Too Low!");
        }
        else if(guess > answer)
        {
            printf("Too High!");
        }
        else
        {
            printf("CORRECT!");
        }
        guesses++;
    }while(guess != answer);

    printf("Answer: %d", answer);
    printf("Guess: %d", guess);
    printf("Guesses: %d", guesses);

    return 0;
}
