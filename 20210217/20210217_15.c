#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/

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