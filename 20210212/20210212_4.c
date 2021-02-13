#include<stdio.h>
#include<stdlib.h>

/*Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

int main(void)
{
    int *ptr = NULL;
    int i;
    int sizeofArray;
    printf("Enter size of the array: ");
    scanf("%d", &sizeofArray);
    ptr = (int *)malloc(sizeofArray * sizeof(int));
    for (i = 0; i < sizeofArray; i++)
    {
        printf("Element %d is: ", i);
        scanf("%d", (ptr + i));
    }
    free(ptr);
    return 0;
}