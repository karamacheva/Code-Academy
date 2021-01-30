#include <stdio.h>
#include "f2.h"

/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.
*/

int main(void)
{
    unsigned int a;
    printf("Enter a value for a: ");
    scanf("%u", &a);
    unsigned int b;
    printf("Enter a value for b: ");
    scanf("%u", &b);
    printf("The lcm of two positive numebr a and b is: %u\n", lcm(a, b));
    float number;
    printf("Enter a value for number: ");
    scanf("%f", &number);
    printf("The absolute value of number is: %.2f\n", absValue(number));
    int number2;
    printf("Enter a value for number2: ");
    scanf("%d", &number2);
    printf("The sqrt of root for numebr2 is %.2f\n", sqtrOfNumber(number2));
    return 0;
}