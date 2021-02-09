#include <stdio.h>

/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях.*/

int findMaxElem(int *);

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9, 2};
    printf("The max element is: %d", findMaxElem(arr));
    return 0;
}

int findMaxElem(int *arr)
{
    int i;
    int maxElem = arr[0];
    for (i = 0; i < 6; i++)
    {
        if (arr[i] > maxElem)
        {
            maxElem = arr[i];
        }
    }
    return maxElem;
}