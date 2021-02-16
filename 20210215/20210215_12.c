#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/

int randomGenerator()
{
    int randNum;
    int lowerLimit = 1;
    int upperLimit = 100;
    randNum = (rand() % upperLimit) + lowerLimit;
    return randNum;
}

void randomInsert(int array[10][10][10])
{
    int count1, count2, count3;
    for (count1 = 0; count1 < 10; count1++)
    {
        for (count2 = 0; count2 < 10; count2++)
        {
            for (count3 = 0; count3 < 10; count3++)
            {
                int randomGenerator();
                array[count1][count2][count3] = randomGenerator();
                printf("\n");
            }
        }
    }
}

void printArray(int array[10][10][10])

{
    printf("\nDisplaying values:\n");
    int count1, count2, count3;
    for (count1 = 0; count1 < 10; count1++)
    {
        for (count2 = 0; count2 < 10; count2++)
        {
            for (count3 = 0; count3 < 10; count3++)
            {
                printf("array[%d][%d][%d] = %d\n", count1, count2, count3, array[count1][count2][count3]);
            }
        }
    }
}

int main(void)
{
    int array[10][10][10];
    srand((unsigned)time(0));
    randomInsert(array);
    printArray(array);
    return 0;
}