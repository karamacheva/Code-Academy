#include <stdio.h>

/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

void inputArr(int *, int);

int main(void)
{
    int arr[5] = {0}; /*Дефинирайте и инициализирайте едномерен масив с 5 елемента*/
    inputArr(arr, 5);
    return 0;
}

void inputArr(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Arr [%d] =  ", i);
        scanf("%d", &arr[i]);
    }
    return;
}