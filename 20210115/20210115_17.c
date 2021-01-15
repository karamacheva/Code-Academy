#include<stdio.h>

/*Задача 17.* Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)*/

const float PI=3.14159;

int main(void){
    float A;
    scanf("%f",&A);
    float B;
    scanf("%f",&B);
    printf("The area is: %f",(PI*A*B));
    return 0;
}