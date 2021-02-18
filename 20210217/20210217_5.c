#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/

int randomGenerator()
{
    int randNum;
    int lowerLimit = 0;
    int upperLimit = 10;
    randNum = (rand() % upperLimit) + lowerLimit;
    return randNum;
}

void randomInsert(int array[5][5])
{
    int count1, count2;
    for (count1 = 0; count1 < 5; count1++)
    {
        for (count2 = 0; count2 < 5; count2++)
        {
            int randomGenerator();
            array[count1][count2] = randomGenerator();
            printf("\n");
        }
    }
}

void printArray(int array[5][5])
{
    printf("\nDisplaying values:\n");
    int count1, count2;
    for (count1 = 0; count1 < 5; count1++)
    {
        printf("\n");
        for (count2 = 0; count2 < 5; count2++)
        {
            printf("%d\t", array[count1][count2]);
        }
    }
}

void findValue(int arr[5][5])
{
    int count1, count2;
    for (count1 = 0; count1 < 5; count1++)
    {
        for (count2 = 0; count2 < 5; count2++)
        {
            if (arr[count1][count2] >= 1 && arr[count1][count2] <= 5)
            {
                printf("The value of array from 1-5 is array[%d][%d] = %d\n", count1, count2, arr[count1][count2]);
            }
        }
    }
}

int main(void)
{
    int array[5][5];
    srand((unsigned)time(0));
    randomInsert(array);
    printArray(array);
    printf("\n");
    findValue(array);
    return 0;
}