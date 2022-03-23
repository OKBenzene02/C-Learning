/*
#include<stdio.h>
#include<stdlib.h>

void board();
int gameplay();
void marking(char mark);

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;
int main()
{
    int status;
    char mark;
    player = 1;

    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("player %d, enter a number\n", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'x' : 'o';
        marking(mark);

        status = gameplay();
        player++;
    }while(status == -1);

    if (status == 1)
    {
        printf("---->Player %d wins\n", --player);
    }
    else
    {
        printf("---->GAME DRAW\n");
    }


    return 0;
}

int gameplay()
{
    int returnvalue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnvalue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        returnvalue = 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        returnvalue = 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        returnvalue = 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        returnvalue = 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        returnvalue = 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        returnvalue = 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        returnvalue = 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        returnvalue = 0;
    }
    else
    {
        returnvalue = -1;
    }
    return returnvalue;
}
void board()
{
    system("cls");

    printf("\t\tTic Tac Toe\n");
    printf("Player-1 --> (X)\nPlayer-2 --> (O)\n");

    printf("\t      |      |      \n");
    printf("\t   %c  |   %c  |   %c   \n", square[1], square[2], square[3]);
    printf("\t______|______|______\n");
    printf("\t      |      |      \n");
    printf("\t   %c  |   %c  |   %c   \n", square[4], square[5], square[6]);
    printf("\t______|______|______\n");
    printf("\t      |      |      \n");
    printf("\t   %c  |   %c  |   %c   \n", square[7], square[8], square[9]);
    printf("\t      |      |      \n");

}

void marking(char mark)
{
    if (choice == 1 && square[1] == '1')
    {
        square[1] = mark;
    }
    else if (choice == 2&& square[2] == '2')
    {
        square[2] = mark;
    }
    else if (choice == 3 && square[3] == '3')
    {
        square[3] = mark;
    }
    else if (choice == 4 && square[4] == '4')
    {
        square[4] = mark;
    }
    else if (choice == 5 && square[5] == '5')
    {
        square[5] = mark;
    }
    else if (choice == 6 && square[6] == '6')
    {
        square[6] = mark;
    }
    else if (choice == 7 && square[7] == '7')
    {
        square[7] = mark;
    }
    else if (choice == 8 && square[8] == '8')
    {
        square[8] = mark;
    }
    else if (choice == 9 && square[9] == '9')
    {
        square[9] = mark;
    }
    else
    {
        printf("Worng move");
        player--;
        getchar();
    }
}

*/
