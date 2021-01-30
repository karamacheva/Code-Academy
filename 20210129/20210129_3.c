#include <stdio.h>

/*Задача 3. Напишете функция, която връща резултат (а+в)*4*/

float result(float, float);

int main(void)
{
    float a;
    printf("Enter a value for a: ");
    scanf("%f", &a);
    float b;
    printf("Enter a value for b: ");
    scanf("%f", &b);
    printf("The result from a and b is: %.2f", result(a, b));
    return 0;
}

float result(float a, float b)
{
    return (a + b) * 4;
}