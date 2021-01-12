#include <stdio.h>

int vzemiBitNa(int number,int position)
{
    return ((number>>position)&1);
}

int main(void){
    int number,position;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a positon: ");
    scanf("%d",&position);
    printf("The bit of %dth position in number is: %d ",position,vzemiBitNa(number,position));
    return 0;
}