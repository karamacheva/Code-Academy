#include <stdio.h> 

int main(void){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int mask = 0xAAAAAAAA;
    int result = number & mask;
    printf("The new number is: %d",result);

    return 0;
}