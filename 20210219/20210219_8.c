#include <stdio.h>

/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/

struct point
{
    int x, y;
};

struct rect
{
    struct point a;
    struct point b;
};

struct point makepoint(int x, int y)
{
    struct point a = {x, y};
    return a;
}

int main(void)
{
    int i, j;
    int x1 = 0, y1 = 0, x2 = 15, y2 = 15;
    struct point a = makepoint(x1, y1);
    struct point b = makepoint(x2, y2);
    struct rect screen = {a, b};
    for (i = screen.a.x; i < screen.b.x; i++)
    {
        for (j = screen.a.y; j < screen.b.y; j++)
        {
            printf(" %c ", '-');
        }
        printf("\n");
    }
    return 0;
}