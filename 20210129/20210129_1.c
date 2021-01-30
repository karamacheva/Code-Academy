#include <stdio.h>

const float PI = 3.14;

float areaCirce(float r)
{
    return PI * r * r;
}

int main(void)
{
    float radius;
    printf("Enter a value for r: ");
    scanf("%f", &radius);
    printf("The area of circle is: %.2f", areaCirce(radius));
    return 0;
}