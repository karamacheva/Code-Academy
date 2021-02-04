#include <stdio.h>

/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/

void lower(char *str)
{
    int i;
    for (i = 0; str[i] != '0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return;
}

int main(void)
{
    char str[] = "HellO I Am EkaTeRinA";
    lower(str);
    printf("%s", str);
    return 0;
}