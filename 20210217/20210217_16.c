#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./*/

int randomGenerator()
{
    int randNum;
    int lowerLimit = 0;
    int upperLimit = 100;
    randNum = (rand() % upperLimit) + lowerLimit;
    return randNum;
}

void randomInsert(int *array)
{
    int i;
    for (i = 0; i < 88; i++)
    {
        int randomGenerator();
        *(array + i) = randomGenerator();
    }
}

void printArray(int *array)
{
    printf("\nDisplaying values:\n");
    int i;
    for (i = 0; i < 88; i++)
    {
        printf("%d ", *(array + i));
    }
}

int *sortNewArray(int *newArr, int *arr1, int *arr2, int sizeNew, int size)
{
    int i, j, temp;
    int countNew = 0;
    for (i = 0; i < size; i++)
    {
        *(newArr + countNew) = *(arr1 + i);
        countNew++;
    }
    for (i = 0; i < size; i++)
    {
        *(newArr + countNew) = *(arr2 + i);
        countNew++;
    }
    for (i = 0; i < sizeNew; i++)
    {
        for (j = i + 1; j < sizeNew; j++)
        {
            if (*(newArr + i) > *(newArr + j))
            {
                temp = *(newArr + i);
                *(newArr + i) = *(newArr + j);
                *(newArr + j) = temp;
            }
        }
    }
    printf("Sorted Array is:\n");
    for (i = 0; i < sizeNew; i++)
    {
        printf("%d ", *(newArr + i));
    }
    return newArr;
}

int main(void)
{
    srand((unsigned)time(0));
    int arr1[88] = {0};
    int *p1arr = arr1;
    randomInsert(p1arr);
    printArray(p1arr);
    int arr2[88] = {0};
    int *p2arr = arr2;
    randomInsert(p2arr);
    printArray(p2arr);
    int arr[176] = {0};
    int *ptr;
    printf("\n");
    ptr = sortNewArray(arr, p1arr, p2arr, 176, 88);
    return 0;
}