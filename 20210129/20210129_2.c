#include<stdio.h>

const float PI = 3.14;

float area()
{
    float r;
    printf("Enter a value for r: ");
    scanf("%f", &r);
    return PI * r * r;
}

int main(void)
{
    printf("The area of circle is: %.2f", area());
    return 0;
}