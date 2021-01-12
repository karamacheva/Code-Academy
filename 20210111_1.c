#include<stdio.h>

int main(void){
    int a=3,b=5;
    int rez1=a & b;
    int rez2=a|b;
    int rez3=a^b;
    printf("The result1 is: %d \nresult2 is: %d \nresult3 is: %d",rez1,rez2,rez3);
    return 0;
}