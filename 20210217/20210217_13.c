#include <stdio.h>
#include <string.h>
/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/
char *reverseStr(char *str)
{
    int length, i;
    char *begin, *end, temp;
    length = strlen(str);
    begin = str;
    end = str;
    for (i = 0; i < length - 1; i++)
        end++;
    for (i = 0; i < length / 2; i++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
    return str;
}

int main(void)
{
    char str[100];
    printf("Enter a string to reverse\n");
    gets(str);
    char *(*reverseString)(char *) = reverseStr;
    printf("The reverse string is: %s\n", reverseString);
    return 0;
}
