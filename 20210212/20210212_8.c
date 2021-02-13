#include <stdio.h>
#include <stdlib.h>

/*Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

int main(void)
{
    int *ptr;
    int i;
    int sizeofArray;
    printf("Enter size of the array: ");
    scanf("%d", &sizeofArray);
    ptr = alloca(sizeofArray * sizeof(int));
    if (NULL == ptr)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    for (i = 0; i < sizeofArray; i++)
    {
        printf("Enter a number for element %d:", i);
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < sizeofArray; i++)
    {
        printf("Element %d is %d\n", i, *(ptr + i));
    }
    return 0;
}