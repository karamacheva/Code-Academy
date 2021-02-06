#include <stdio.h>
#include <string.h>
/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

int myAtoi(char *c)
{
    int value = 0;
    int isPositive = 1;
    if (*c == '+' || *c == '-')
    {
        if (*c == '-')
        {
            isPositive = -1;
        }
        c++;
    }
    while (*c >= '0' && *c <= '9')
    {
        value *= 10;
        value += (int)(*c - '0');
        c++;
    }
    return (value * isPositive);
}

void myReverse(char *str)
{
    int l, i;
    char *begin, *end, temp;
    l = strlen(str);
    begin = str;
    end = str;
    for (i = 0; i < l - 1; i++)
    {
        end++;
    }
    for (i = 0; i < l / 2; i++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
}

void myItoa(int n, char *str)
{
    do
    {
        *str = (n % 10) + '0';
        n /= 10;
        str++;
    } while (n != 0);
    return;
}

double myAtof(char *str)
{
    int isPositive;
    double number = 0, power = 1;
    isPositive = (*str == '-') ? -1 : 1;
    if (*str == '-' || *str == '+')
    {
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        number = 10 * number + (*str - '0');
        str++;
    }
    if (*str == '.')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        number = 10 * number + (*str - '0');
        power *= 10;
        str++;
    }
    return isPositive * number / power;
}

int main(void)
{
    char s[] = "1234";
    printf("The function atoa: %d\n", myAtoi(s));
    int number = 123;
    char str[4];
    myItoa(number, str);
    myReverse(str);
    printf("The function itoa: %s\n", str);
    char s1[] = "123.456";
    printf("The function atof: %lf\n", myAtof(s1));
    return 0;
}