/*Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWCOLSIZE 7

enum direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

void initializeBoard(int **board)
{
    int i, j;
    for (i = 0; i < ROWCOLSIZE; i++)
    {
        for (j = 0; j < ROWCOLSIZE; j++)
        {
            board[i][j] = (rand() % 4) + 1;
        }
    }
    board[ROWCOLSIZE - 1][ROWCOLSIZE - 1] = 0; /*The final*/
}

void printBoard(int **board)
{
    int i, j;
    for (i = 0; i < ROWCOLSIZE; i++)
    {
        printf("\n");
        for (j = 0; j < ROWCOLSIZE; j++)
        {
            printf("%2d ", board[i][j]);
        }
    }
}

int isGameEnd(int **board)
{ /*check is Game end*/
    int i, j, count;
    for (i = 0; i < ROWCOLSIZE; i++)
    {
        for (j = 0; j < ROWCOLSIZE; j++)
        {
            if (board[i][j] >= 1)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("GAME END!\n");
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    srand(time(NULL));
    int i;
    int **board = (int **)malloc(ROWCOLSIZE * sizeof(int *)); /*Allocated memory*/
    for (i = 0; i < ROWCOLSIZE; i++)
    {
        board[i] = (int *)malloc(ROWCOLSIZE * sizeof(int));
    }

    initializeBoard(board);
    printf("The board looks like: \n");
    printBoard(board);

    for (i = 0; i < ROWCOLSIZE; i++)
    {
        free(board[i]);
    }
    return 0;
}