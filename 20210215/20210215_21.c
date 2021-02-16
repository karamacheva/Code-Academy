#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/

int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

void sort(char *str)
{
    qsort(str, strlen(str), sizeof(char), cmp);
    printf("%s\n", str);
    return;
}

int main(void)
{
    char str1[] = "hello";
    sort(str1);
    return 0;
}