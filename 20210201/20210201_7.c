#include <stdio.h>

/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

unsigned long long int product(int number)
{
    if (number < 2)
    {
        return 1;
    }
    return number * product(number - 1);
}

int main(void)
{
    printf("The product is: %llu", product(30));
    return 0;
}