#include<stdio.h>

int main(void){
    char a = 255;
    char b = 10;
    printf("%d\n", (a+b));//255 може да го представим като 1111 1111 , а 10->0000 1010  и като съберем получаме 0000 1001
    printf("%c\n", (a+b));//тук ще имаме просто ' ' 
    return 0;
}