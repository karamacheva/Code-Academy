#include <stdio.h>

/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/

struct point
{
    int x, y;
};

int main(void)
{
    int i, j;
    struct point a = {.x = 3, .y = 4};
    struct point b = {.x = 7, .y = 7};
    char matrix[15][15];
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (i == a.x && j == a.y)
            {
                matrix[i][j] = '@';
            }

            else if (i == b.x && j == b.y)
            {
                matrix[i][j] = '@';
            }

            else
            {
                matrix[i][j] = '-';
            }
        }
    }
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe matrix with other way\n");

    for (i = a.x; i <= b.x; i++)
    {
        for (j = a.y; j <= b.y; j++)
        {
            matrix[i][j] = '@';
        }
    }

    for (i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            printf(" %c ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
