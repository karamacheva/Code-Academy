#include<stdio.h>

int main(void){
    double a=4.9876543;
    printf("%1.7f",a);
    long double b=7.12345678901234567890;
    printf("\n%Lf",b);
    float c=18398458438583853.28;
    printf("\n%f",c);
    long double d=18398458438583853.39875937284928422;
    printf("\n%Lf",d);
    return 0;
}