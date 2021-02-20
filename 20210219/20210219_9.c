#include <stdio.h>

/*Задача 9. Направете функця add(), която събира две точки.*/

struct point
{
    int x, y;
};

struct point add(struct point a, struct point b)
{
    struct point p = {a.x + b.x, a.y + b.y};
    return p;
}

int main(void)
{
    struct point a = {.x = 3, .y = 4};
    struct point b = {.x = 7, .y = 7};
    struct point c = add(a, b);
    printf("The point c is: c(%d,%d)\n", c.x, c.y);
    return 0;
}