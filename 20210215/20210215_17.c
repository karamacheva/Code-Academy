#include <stdio.h>
#include <string.h>

/*Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/

int main(void)
{
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[64];
    char string4[32];
    memset(string2, '.', 64);
    memset(string4, '.', 32);
    strcpy(string4, string1);
    strcpy(string2, string3);
    printf("The new string is: %s\n", string4);
    printf("The new string is: %s\n", string2);
    return 0;
}