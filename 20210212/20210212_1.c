
#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/

int main(void)
{
    int *ptr = NULL;
    int sumArray = 0;
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
    for (i = 0; i < sizeofArray; i++)
    {
        sumArray += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sumArray);
    free(ptr);
    return 0;
}