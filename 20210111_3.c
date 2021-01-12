#include<stdio.h>

int izchisliBitNa(int number,int position)
{
    int mask=(1<<position);
    mask=~mask;
    return (number & mask);
}

int main(void){
    int number,position;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a positon: ");
    scanf("%d",&position);
    printf("The new in number is: %d ",izchisliBitNa(number,position));
    return 0;
}