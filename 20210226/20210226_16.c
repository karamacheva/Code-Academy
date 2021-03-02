/*Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BOARDROWS 3
#define BOARDCOLUMS 8
#define PULLCOUNTS 16

void initializeBoard(int **board) /*initalize board*/
{
    int num0 = 0, num1 = 9, num2 = 1, i, j;
    for (i = 0; i < BOARDROWS; i++)
    {
        for (j = 0; j < BOARDCOLUMS; j++)
        {
            if (i == 2)
            {
                board[i][j] = num2;
                num2++;
            }
            if (i == 1)
            {
                board[i][j] = num1;
                num1++;
            }
            if (i == 0)
            {
                board[i][j] = num0;
            }
        }
    }
}

void printBoard(int **board)
{
    int i, j;
    for (i = 0; i < BOARDROWS; i++)
    {
        printf("\n");
        for (j = 0; j < BOARDCOLUMS; j++)
        {
            printf("%2d ", board[i][j]);
        }
    }
}

int isGameEnd(int **board)
{ /*check is Game end*/
    int i, j, count = 0;
    for (i = 0; i < BOARDROWS; i++)
    {
        for (j = 0; j < BOARDCOLUMS; j++)
        {
            if (board[i][j] >= 2)
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
    int i;
    int **board = (int **)malloc(BOARDROWS * sizeof(int *));
    for (i = 0; i < BOARDROWS; i++)
    {
        board[i] = (int *)malloc(BOARDCOLUMS * sizeof(int));
    }
    initializeBoard(board);
    printf("The board looks like: \n");
    printBoard(board);
    return 0;
}