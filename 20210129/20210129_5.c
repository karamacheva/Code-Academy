#include <stdio.h>

/*Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/

int isEvenOrOdd(int);

int main(void)
{
    int number;
    printf("Enter a value fro number: ");
    scanf("%d", &number);
    (isEvenOrOdd(number) == 1) ? printf("The number is even\n") : printf("The number is odd");
    return 0;
}

int isEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}