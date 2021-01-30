#include <stdio.h>

/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/

long int decToBin(int);

int main(void)
{
    int number;
    printf("Enter a value fro number: ");
    scanf("%d", &number);
    printf("The binary number is: %d\n", decToBin(number));
    return 0;
}

long int decToBin(int n)
{
    long int bin = 0;
    int remainder, i = 1;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        bin += remainder * i;
        i = i * 10;
    }
    return bin;
}