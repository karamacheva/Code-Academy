#include<stdio.h>

int main(void){
    int number,position;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a positon: ");
    scanf("%d",&position);
    int mask=(1<<position);
    int newNumber=number ^ mask;
    printf("The new number is: %d ",newNumber);
    return 0;
}