#include <stdio.h>

int main(void)
{
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d = %d\n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d\n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d  Remainder : %d\n", iY, iX, iResult);
    /* homework: examples for '*' и '+', float - използвайте вместо int*/
    float iX1 = 13.23;
    float iY1 = 44.67;
    float iResult1 = 0;
    iResult1 = iX1 + iY1;
    printf("%f + %f = %f\n", iX1, iY1, iResult1);
    iResult1 = iX1 * iY1;
    printf("%f * %f = %f\n", iX1, iY1, iResult1);
    return 0;
}