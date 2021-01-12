#include<stdio.h>

int addDigit(int a,int b){
    return a+b;
}

int main(void)
{
    int a, b;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%d",&b);
    printf("The sum of digit is: %d  ",addDigit(a,b));
    return 0;
}