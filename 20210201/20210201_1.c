#include <stdio.h>

/*Задача 1. Напишете функция, която принтира низ, пойнтера към
началото му е подаден като аргумент на функцията void printstr(char *s); Не
забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова
проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
се стигне този знак.*/

void printStr(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
}

int main()
{
    char str[] = "Hello world!";
    printStr(str);
    return 0;
}

