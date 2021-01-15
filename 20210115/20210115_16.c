#include<stdio.h>

/*Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13.*/

const float PI=3.14159;

int main(void){
    float r1=1.0;
    printf("The area is: %f",(PI*r1*r1));
    float r2=1.5;
    printf("\nThe area is: %f",(PI*r2*r2));
    float r3=13.0;
    printf("\nThe area is: %f",(PI*r3*r3));
    return 0;
}