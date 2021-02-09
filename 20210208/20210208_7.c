#include <stdio.h>

/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(int);
int dayOfYear(int, int, int);

int main(void)
{
    printf("%d", dayOfYear(1998, 10, 18));
    return 0;
}

int dayOfYear(int year, int month, int day)
{
    int nDay = 0;
    int i;
    for (i = 0; i < month - 1; i++)
    {
        nDay += daysInMonth[i];
    }
    nDay += day;
    if ((isLeapYear(year) == 1) && month >= 3)
    {
        nDay++;
    }
    return nDay;
}

int isLeapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}