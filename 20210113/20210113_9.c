#include<stdio.h>

int main(void){
    double a  =4.9876543;
    printf("%.7lf\n",a);
    long double b = 7.12345678901234567890;
    printf("%1.20Lf\n",b);
    long double c=18398458438583853.28;
    printf("%17.2Lf\n",c);
    long double d=18398458438583853.39875937284928422;
    printf("%17.17Lf",d);
    return 0;
}