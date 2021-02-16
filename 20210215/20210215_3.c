#include <stdio.h>

/*Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/

int main(void)
{
    int a = 4;
    int *aPtr = &a;
    *aPtr = 10;
    printf("The value of a=%d\n", a);
    float b = 7;
    float *bPtr = &b;
    *bPtr = 10.45;
    printf("The value of b=%.2f\n", b);
    char c = 'e';
    char *cPtr = &c;
    *cPtr = 'z';
    printf("The value of c=%c\n", c);
    return 0;
}