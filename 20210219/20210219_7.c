#include <stdio.h>

/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

struct point
{
    int x, y;
};

struct point makepoint(int x, int y)
{
    struct point a = {x, y};
    return a;
}

int main(void)
{
    int x, y;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf(" %d", &y);
    struct point a = makepoint(x, y);
    printf("The point is:  a(%d,%d)\n", a.x, a.y);
    return 0;
}