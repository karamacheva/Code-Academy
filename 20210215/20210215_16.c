#include <stdio.h>
#include<string.h>

/*Задача 16.
Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm*/

int main(void)
{
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[64];
    char string4[32];
    strcpy(string4, string1);
    strcpy(string2, string3);
    printf("The new string is: %s\n", string4);
    printf("The new string is: %s\n", string2);
    return 0;
}