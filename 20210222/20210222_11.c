#include <stdio.h>

/*Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/

union myUnion
{
    char c;
    int a, b;
};

int main(void)
{
    union myUnion u;
    u.a = -7;
    u.b = 10;
    u.c = 'c';
    printf("My union is: %d,%d,%c\n", u.a, u.b, u.c);
    return 0;
}