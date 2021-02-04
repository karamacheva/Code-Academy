#include <stdio.h>

/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/

int linSearch(int *, int, int);

int main(void)
{
    int arr[] = {1, 3, 5, 2, 8, 4, 6, 7};
    printf("The number is on position: %d", linSearch(arr, 8, 4));
    return 0;
}

int linSearch(int *arr, int l, int d)
{
    int index = -1;
    int i;
    for (i = 0; i < l; i++)
    {
        if (arr[i] == d)
        {
            index = i;
        }
    }
    return index;
}