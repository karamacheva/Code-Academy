#include<stdio.h>

int main(void){
    char cValue='b';
    printf("\n%d\n",sizeof(cValue));
    int iValue=100;
    printf("\n%d\n",sizeof(iValue));
    float fValue=2.456;
    printf("\n%d\n",sizeof(fValue));
    unsigned long int ulValue=6424881;
    printf("\n%d\n",sizeof(ulValue));
    short int siValue=1247;
    printf("\n%d\n",sizeof(siValue));
    long long int lValue=11111111;
    printf("\n%d\n",sizeof(lValue));
    return 0;
}