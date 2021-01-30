#include <stdio.h>

/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.*/

float result(float, float, float);

int main(void)
{
    float a;
    printf("Enter a value for a: ");
    scanf("%f", &a);
    float b;
    printf("Enter a value for b: ");
    scanf("%f", &b);
    float c;
    printf("Enter a value for c: ");
    scanf("%f", &c);
    printf("The result from a,b and c is: %.2f", result(a, b, c));
    return 0;
}

float result(float a, float b, float c)
{
    return a * 2 + b * c;
}