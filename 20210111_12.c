#include<stdio.h>

int main(void)
{
    int number,position;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a position: ");
    scanf("%d",&position);
    int mask = (1 << position);
    int newNumber = number | mask;
    position += 3;
    int result = newNumber | (1<<position);
    printf("The new number is: %d",result);
}