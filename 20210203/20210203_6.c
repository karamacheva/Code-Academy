#include <stdio.h>

/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */

void mySwap(int *, int *);

int main(void)
{
    int a = 4, b = 7;
    int *aPtr = &a;
    int *bPtr = &b;
    mySwap(aPtr, bPtr);
    printf("The value of a = %d,the value of b = %d", a, b);
    return 0;
}

void mySwap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return;
}