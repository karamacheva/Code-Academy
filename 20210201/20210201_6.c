#include <stdio.h>

/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

unsigned long long int product()
{
    unsigned long long int prod = 1;
    int i;
    for (i = 1; i < 31; i++)
    {
        prod *= i;
    }
    return prod;
}

int main(void)
{
    printf("The product is: %llu", product());
    return 0;
}