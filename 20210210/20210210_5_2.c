#include <stdio.h>

/*Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
*/

void sort(int *, int);
void print(int *, int);

int main()
{
    int arr[5] = {1, 10, 8, 4, 12};
    sort(arr, 5);
    print(arr,5);
    return 0;
}

void sort(int *arr, int size)
{
    int *ptr = arr + size;
    while (arr < ptr)
    {
        int *temp = arr + 1;
        while (temp <= ptr)
        {
            if (*temp > *arr)
            {
                *arr = *temp + *arr;
                *temp = *arr - *temp;
                *arr = *arr - *temp;
            }
            temp++;
        }
        arr++;
    }
    return;
}

void print(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}