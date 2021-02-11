#include <stdio.h>

/*Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.*/

int sumArr(int *, int);

int main(void)
{

    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *ptr = &arr[1];
    printf("The sum of even indexes is: %d", sumArr(ptr, 10));
    return 0;
}

int sumArr(int *arr, int size)
{
    int *ptr = arr + size;
    int sum = 0;
    while (arr < ptr)
    {
        sum += *(arr - 1);
        arr += 2;
    }
    return sum;
}