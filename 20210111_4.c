#include<stdio.h>

int vdigniBitNa(int number,int position)
{
    int mask=(1<<position);
    return (number | mask);
}

int main(void){
    int number,position;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a positon: ");
    scanf("%d",&position);
    printf("The new in number is: %d ",vdigniBitNa(number,position));
    return 0;
}