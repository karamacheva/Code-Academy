#include<stdio.h>
#include<stdlib.h>

/*Задача 5 Разширяване на заделена памет с realloc*/

int main(void)
{
    int *piValue = NULL;
    int uSize = 0;
    printf("Enter size: ");
    scanf("%d", &uSize);
    piValue = (int *)malloc(uSize * sizeof(int));
    if (NULL == piValue)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Addresses of allocated memory: %p\n", piValue);
    printf("Enter the new size: ");
    scanf("%d", &uSize);
    piValue = realloc(piValue, uSize * sizeof(int));
    if (NULL == piValue)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Addresses of reallocated memory: %p\n", piValue);
    free(piValue);
    return 0;
}