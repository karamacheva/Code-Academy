#include <stdio.h>

/*Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива.*/

void printArr(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}

int main(void)
{
    int arr[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int *arrPtr;
    arrPtr = arr;
    *(arr + 2) = 5;
    printf("The third element of array is: %d\n", *(arr + 2));
    /*printf("The third element of array is: %d\n",arr[2]);*/
    *(arr + 3) = 33;
    printf("The forth element of array is: %d\n", *(arr + 3));
    /*printf("Theforth element of array is: %d\n",arr[3]);*/
    *(arr + 4) -= 7;
    printf("The fifth element of array is: %d\n", *(arr + 4));
    /*printf("The fifth element of array is: %d\n",arr[4])*/;
    *(arr + 6) += 10;
    printf("The seventh element of array is: %d\n", *(arr + 6));
    /*printf("The seventh element of array is: %d\n",arr[6]);*/
    *(arr + 9) *= 3;
    printf("The last element of array is: %d\n", *(arr + 9));
    /*printf("The last element of array is: %d\n",arr[9]);*/
    printArr(arr, 10);
    return 0;
}