#include <stdio.h>
#include <stdlib.h>

/*Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

int main(void)
{
    int *ptr;
    int i;
    int sizeofArray;
    printf("Enter size of the array: ");
    scanf("%d", &sizeofArray);
    ptr = (int *)calloc(sizeofArray, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        exit(1);
    }
    printf("Array after using calloc:\n");
    for (i = 0; i < sizeofArray; i++)
    {
        printf("Element %d is: %d\n", i, *(ptr + i));
    }
    free(ptr);
    return 0;
}