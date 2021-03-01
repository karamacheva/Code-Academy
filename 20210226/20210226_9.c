#include <stdio.h>

/*Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова*/

int main(void)
{
    int value1 = 19, value2 = 9;
    double result = 0;
    result = (double)value1 / value2;
    printf("The result is: %.3lf\n", result);
    double result2 = 0;
    result2 = value1 / value2;
    printf("The result is: %.3lf\n", result2);
    short int siValue = 18;
    int *pnValue = (int *)&siValue;
    *pnValue = 22;
    printf("%d, %d\n", siValue, *pnValue);
    char chValue = 'x';
    double *pdValue = (double *)&chValue;
    *pdValue = 8.5;
    printf("%c, %lf\n", chValue, *pdValue);
    return 0;
}