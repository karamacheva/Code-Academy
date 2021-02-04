#include <stdio.h>

/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/

void squeeze(char *str, char c)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main(void)
{
    char str[] = "Hi i am Ekaterina";
    squeeze(str, 'i');
    printf("%s", str);
    return 0;
}