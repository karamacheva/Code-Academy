#include <stdio.h>

/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/

float areaTriangle(float, float);
float areaRectangle(float, float);

int main(void)
{
    float a;
    printf("Enter a value for a: ");
    scanf("%f", &a);
    float b;
    printf("Enter a value for b: ");
    scanf("%f", &b);
    if (a > 0 && b > 0)
    {
        printf("The area of triagnle is: %.2f\n", areaTriangle(a, b));
        printf("The area of rectangle is: %.2f\n", areaRectangle(a, b));
    }
    else
    {
        printf("Inavlid input for a or b\n");
    }
    return 0;
}

float areaTriangle(float a, float b)
{
    return (a * b) / 2;
}

float areaRectangle(float a, float b)
{
    return areaTriangle(a, b) + areaTriangle(a, b);
}