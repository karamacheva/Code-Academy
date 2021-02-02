
#include <stdio.h>
/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/

double atof(char *s)
{
    int i = 0;
    int power = 1;
    double n = 0;
    int isPositive;
    for (i; s[i] == ' '; i++)
    {
        continue;
    }
    isPositive = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0');
    }
    if (s[i] == '.')
    {
        i++;
    }
    for (power; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0');
        power *= 10;
    }
    return isPositive * n / power;
}

int main(void)
{
    char s[] = "-123.456";
    printf("%lf", atof(s));
    return 0;
}
