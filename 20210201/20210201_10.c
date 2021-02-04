#include <stdio.h>
#include <string.h>

/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/

void reverse(char *s)
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return;
}

void itob(int n, char *str, int b)
{
    int i = 0, remainder;
    while (n != 0)
    {
        remainder = n % b;
        switch (remainder)
        {
        case 10:
            str[i] = 'A';
            break;
        case 11:
            str[i] = 'B';
            break;
        case 12:
            str[i] = 'C';
            break;
        case 13:
            str[i] = 'D';
            break;
        case 14:
            str[i] = 'E';
            break;
        case 15:
            str[i] = 'F';
            break;
        default:
            str[i] = remainder + '0';
            break;
        }
        n /= b;
        i++;
    }
    return;
}

int main(void)
{
    int number = 128;
    char str[7];
    itob(number, str, 2);
    reverse(str);
    printf("%s\n", str);

    return 0;
}