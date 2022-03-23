/* Guessing Game
Time: 19:30
Date: 17-12-2020
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomnumber = 0;
    randomnumber = rand() % 21;

    printf("System guessed: %d\n", randomnumber);

    int guessed = 0;
    int maximumGusses;

    printf("Guess any number between 0 to 20.\n");
    scanf("%d", &guessed);
    for (maximumGusses = 5; maximumGusses > 0; --maximumGusses)
    {
        printf("You have %d tr%s left.", maximumGusses, maximumGusses == 1 ? "y" : "ies");
        printf("please guess the number.\n");
        scanf("%d", &guessed);


            if (guessed > randomnumber)
            {
                printf("please guess lower.\n");
            }
            else if (guessed < randomnumber)
            {
                printf("please guess higher.\n");
            }
            else
            {
                printf("You have guessed it correctly.\n");
                break;
            }

            //printf("please guess the number.\n");
            //scanf("%d", &guessed);

    }


    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomnumber = 0;
    randomnumber = rand() % 21;
    printf("System guessed: %d\n", randomnumber);

    int guess = 0;
    printf("Please enter a number between 0 to 20:\n");
    scanf("%d", &guess);
    int maximumGuesses = 0;

    for (maximumGuesses = 5; maximumGuesses > 0; --maximumGuesses)
    {
        printf("you have %d of tr%s left.\n", maximumGuesses, maximumGuesses ==1 ? "y" : "ies");
        printf("Guess any number: \n");
        scanf("%d", &guess);

        if (guess == randomnumber)
            printf("you have guessed it correctly.\n");
        else if (guess > randomnumber)
            printf("Please guess lower.\n");
        else if (guess < randomnumber)
            printf("Please guess higher.\n");
        else if (guess > 20 && guess < 0)
            printf("Please guess in the range 0 to 20.\n");
        else
            printf("Sorry you are out of guesses.\n");

    }


    return 0;
}
*/
//============================================================

/* Simple guessing game using while loop
with infinite guessing.
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomnumber = 0;
    randomnumber = rand() % 20;
    printf("System guessed: %d\n", randomnumber);

    int guess = 0;
    while (guess != randomnumber)
    {
        printf("Please enter a number between 0 to 20.\n");
        scanf("%d", &guess);

        if (guess > randomnumber)
        {
            printf("please guess lower\n");
        }
        else if (guess < randomnumber)
        {
            printf("please guess higher.\n");
        }
        else
        {
            printf("You have guessed it correctly.\n");
            break;
        }

    }


    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomnumber = 0;
    randomnumber = rand() % 51;

    int maximumguess;
    int guess=0;
    printf("System guessed: %d\n", randomnumber);


    for(maximumguess=5; maximumguess>0; --maximumguess)
    {
        printf("\nto find the number in %d trai%s.",maximumguess, maximumguess == 1? "l":"ls");
        printf("Guess the number between 1 to 50:\n");
        scanf(" %d",&guess);

                if(guess>randomnumber)
                {
                    printf("Guess lower number\n");
                }
                else if(guess<randomnumber)
                {
                    printf("Guess higher number\n");

                }
                else
                {
                    printf("Your guess is correct\n");
                }


    }
}
*/
