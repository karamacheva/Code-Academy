#include <stdio.h>

/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/

double avarageSum(int *, int);

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9, 2};
    printf("The avarage sum is: %.3lf", avarageSum(arr, 6));
    return 0;
}

double avarageSum(int *arr, int size)
{
    double avarageSum = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        avarageSum += arr[i];
    }
    return avarageSum / size;
}