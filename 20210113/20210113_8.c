#include<stdio.h>

int main(void){
    char x = 8;
    x = x - 2;//x=6
    x = x + 6;//x=12
    x = x - 10 + 2;//x=12-10+2=4
    printf("%d",x);
}