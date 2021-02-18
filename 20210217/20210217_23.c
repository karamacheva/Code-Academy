#include <stdio.h>

/*Задача 23.
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSort(int *arr, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        int isSwapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                isSwapped = 1;
            }
        }

        if (!isSwapped)
            return;
    }
}

int main(void)
{
    int best[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int average[8] = {1, 2, 3, 4, 9, 2, 4, 5};
    int worst[8] = {9, 8, 7, 6, 5, 4, 3, 2};
    int i;
    BubbleSort(best, 8);
    for (i = 0; i < 8; i++)
    {
        printf("%d ", best[i]);
    }
    printf("\n");
    BubbleSort(average, 8);
    for (i = 0; i < 8; i++)
    {
        printf("%d ", average[i]);
    }
    printf("\n");
    BubbleSort(worst, 8);
    for (i = 0; i < 8; i++)
    {
        printf("%d ", worst[i]);
    }
    return 0;
}