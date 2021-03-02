#include <stdio.h>

/*Задача 10. Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и*/
int main(void)
{
    char cValue = '0';
    printf("%c\n", cValue);
    unsigned short usValue = -(cValue + cValue);
    printf("%u\n", usValue);
    int iValue = usValue;
    printf("%d\n", iValue);
    unsigned int uiValue = usValue;
    printf("%u\n", uiValue);
    long lValue = iValue;
    printf("%ld\n", lValue);
    unsigned long ulValue = iValue;
    printf("%u\n", ulValue);
    float fValue = ulValue;
    printf("%.lf\n", fValue);
    double dfValue = ulValue;
    printf("%.lf\n", dfValue);
    return 0;
}