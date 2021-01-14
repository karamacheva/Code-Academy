#include<stdio.h>

int main(void){
    char a=-127;
    printf("%d",a);
    unsigned char b=255;
    printf("\n%d",b);
    unsigned int c=6237498;
    printf("\n%d",c);
    unsigned int d=4294967292;
    printf("\n%u",d);
    long long int e=-9000000000000775845;
    printf("\n%lld",e); 
    return 0;
}
