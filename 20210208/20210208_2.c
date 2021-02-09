#include <stdio.h>

/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

void inputArray(int *, int, int);

int main(void)
{
    int arr[5][5] = {{5, 6, 7, 1, 4}, {10, 20, 30, 40, 50}, {1, 2, 3, 5, 7}, {15, 30, 40, 55, 70}, {12, 13, 18, 19, 2}};
    inputArray(&arr[0][0], 5, 5);
    return 0;
}

void inputArray(int *arr, int sizeRow, int sizeColums)
{
    int i, j;
    for (i = 0; i < sizeRow; i++)
    {
        for (j = 0; j < sizeColums; j++)
        {
            printf("Arr [%d][%d]:", i, j);
            scanf("%d", &(*((arr+i*sizeColums) + j)));
        }
    }
}
