#include <stdio.h>

/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */

int *fibSerries(int *pFib, int size)
{
    int i;
    *(pFib + 0) = 0;
    *(pFib + 1) = 1;
    for (i = 2; i < size; i++)
    {
        *(pFib + i) = *(pFib + i - 1) + *(pFib + i - 2);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(pFib + i));
    }
    return pFib;
}

int main(void)
{
    int arr[10];
    int *ptrArray = arr;
    int *ptr;
    printf("The arrays of Fib is :\n");
    ptr = fibSerries(ptrArray, 10);
    return 0;
}
