#include <stdio.h>

/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.
2. Напишете макрос swap(t, x, y), койти променя местата на двата аргумента
от тип t.*/

#define PI 3.14159
#define E 2.71828
#define swap(t, x, y) \
    t temp = x;       \
    x = y;            \
    y = temp;

int main(void)
{
    double radius = 2.4;
    printf("The area of cicrle is: %.2lf\n", (PI * radius * radius));
    int a = 4, b = 5;
    swap(int, a, b);
    printf("a=%d,b=%d\n", a, b);
    return 0;
}