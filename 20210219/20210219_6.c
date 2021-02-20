#include <stdio.h>

/*Задача 6. Направете по подобен начин триъгълник:*/

struct point
{
    int x, y;
};

int main(void)
{
    int i, j;
    struct point a = {.x = 3, .y = 4};
    struct point b = {.x = 7, .y = 7};
    struct point c = {b.x, a.y};
    char matrix[15][15];
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            matrix[i][j] = '-';
        }
    }
    for (i = c.x; i >= a.x; i--)
    {
        for (j = i + 1; j >= a.y; j--)
        {
            matrix[i][j] = '@';
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            printf(" %c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}