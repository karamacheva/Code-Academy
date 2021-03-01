#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXDIAM 140 /*A*/
#define MINDIAM 15
#define MAXTHICKNESS 3.5
#define MINTHICKNESS 0.5
#define MAXDIAM1 95 /*B*/
#define MINDIAM1 35
#define MAXTHICKNESS1 0.9
#define MINTHICKNESS1 0.3
#define A 15
#define B 18

/*Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/

typedef struct WaterMelon
{
    double diameter;
    double barkThickness;
} t_WaterMelon;

void getInfoMelon(t_WaterMelon *ptrWaterMelon) /*A*/
{
    double diam = ((double)rand() / RAND_MAX) * (MAXDIAM - MINDIAM) + MINDIAM;
    double thickness = ((double)rand() / RAND_MAX) * (MAXTHICKNESS - MINTHICKNESS) + MINTHICKNESS;
    ptrWaterMelon->diameter = diam;
    ptrWaterMelon->barkThickness = thickness;
}

void getInfoPumbpkin(t_WaterMelon *ptrWaterMelon) /*B*/
{
    double diam1 = ((double)rand() / RAND_MAX) * (MAXDIAM1 - MINDIAM1) + MINDIAM1;
    double thickness1 = ((double)rand() / RAND_MAX) * (MAXTHICKNESS1 - MINTHICKNESS1) + MINTHICKNESS1;
    ptrWaterMelon->diameter = diam1;
    ptrWaterMelon->barkThickness = thickness1;
}

void printWaterMelon(t_WaterMelon *ptrWaterMelon)
{
    printf("%.2lf,%.2lf\n", ptrWaterMelon->diameter, ptrWaterMelon->barkThickness);
}

int main(void)
{
    srand(time(NULL));
    int i;
    t_WaterMelon *waterMelons[A];

    for (i = 0; i < A; i++)
    {
        waterMelons[i] = (t_WaterMelon *)malloc(sizeof(t_WaterMelon));
    }

    for (i = 0; i < A; i++)
    {
        getInfoMelon(waterMelons[i]);
    }

    printf("The waterMelons from sort melon :\n");
    for (i = 0; i < A; i++)
    {
        printWaterMelon(waterMelons[i]);
    }

    t_WaterMelon *waterPumpkin[B];

    for (i = 0; i < B; i++)
    {
        waterPumpkin[i] = (t_WaterMelon *)malloc(sizeof(t_WaterMelon));
    }

    for (i = 0; i < B; i++)
    {
        getInfoPumbpkin(waterPumpkin[i]);
    }

    printf("The waterMelons from sort pumpkin :\n");
    for (i = 0; i < B; i++)
    {
        printWaterMelon(waterPumpkin[i]);
    }

    for (i = 0; i < A; i++)
    {
        free(waterMelons[i]);
    }

    for (i = 0; i < B; i++)
    {
        free(waterPumpkin[i]);
    }

    return 0;
}