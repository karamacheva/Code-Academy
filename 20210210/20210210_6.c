#include <stdio.h>

/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/

int linearSearch(int *, int, int);

int main(void)
{

    int arr[] = {2, 4, 6, 8, 10};

    printf("The index of key is: %d\n", linearSearch(arr, 5, 10));

    return 0;
}

int linearSearch(int *arr, int size, int key)
{
    int *ptr = arr + size;
    while (arr <= ptr)
    {
        if (*arr == key)
        {
            return arr - (ptr - size);
        }
        arr++;
    }
    return 0;
}