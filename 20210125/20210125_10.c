#include <stdio.h>
/*Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.*/

void reverse(char s[])
{
    char reverse[1024];
    int i, end;
    int length = 0;

    while (s[length] != '\0')
        length++;

    end = length - 1;
    for (i = 0; i < length; i++)
    {
        reverse[i] = s[end];
        end--;
    }

    reverse[i] = '\0';
    printf("%s\n", reverse);
}

int main(void)
{
    char c;
    char str[1024];
    int countSymbols = 0;
    while ((c = getchar()) != EOF)
    {
        str[countSymbols] = c;
        countSymbols++;
        if (c == '\n')
        {
            //reverse(str);
            continue;
        }
    }
    printf("The reverse string is: ");
    reverse(str);
    return 0;
}