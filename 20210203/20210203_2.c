#include <stdio.h>

/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/

void printArr(int *, int);

int main(void)
{
    int arr[] = {1, 3, 5, 2, 8, 4, 6, 7};
    printArr(arr, 8);
    return 0;
}

void printArr(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
