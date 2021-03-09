/*Задача 1 Напишете програма, която чете стринг от стандартния вход и 
го извежда на стандартния изход с функцията gets(szBuf);*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 64

int main(void)
{
    char str[BUFSIZE];
    printf("Enter a string: \n");
    gets(str);
    printf("The string is: \n");
    puts(str);
    return 0;
}