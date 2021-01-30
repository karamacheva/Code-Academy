#include <stdio.h>
#include "f.h"

/*Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.*/

int main(void)
{
    int a;
    printf("Enter a value for a: ");
    scanf("%d", &a);
    int b;
    printf("Enter a value for b: ");
    scanf("%d", &b);
    int c;
    printf("Enter a value for c: ");
    scanf("%d", &c);
    printf("The sum of a and is: %d\n", add(a, b));
    printf("The value of c is : %d\n", incr(c));
    return 0;
}