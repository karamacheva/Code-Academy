#include <stdio.h> 

int main(void){
    int number,position;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a position: ");
    scanf("%d",&position);
    int mask = 0b11111111;
    position=8-position;
    mask=(mask>>position);
    int result = number & mask;
    printf("The new number is: %d",result);

    return 0;
}