#include <stdio.h>
#define MAX_YEAR 9999
#define MIN_YEAR 1900
/*Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/
struct myDate
{
    int day : 6;
    int month : 6;
    int year : 12;
};

int IsLeapYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int isValidDate(struct myDate *validDate)
{
    if (validDate->year > MAX_YEAR || validDate->year < MIN_YEAR)
    {
        return 0;
    }
    if (validDate->month < 1 || validDate->month > 12)
    {
        return 0;
    }
    if (validDate->day < 1 || validDate->day > 31)
    {
        return 0;
    }
    if (validDate->month == 2)
    {
        if (IsLeapYear(validDate->year))
        {
            return (validDate->day <= 29);
        }
        else
        {
            return (validDate->day <= 28);
        }
    }
    if (validDate->month == 4 || validDate->month == 6 || validDate->month == 9 || validDate->month == 11)
    {
        return (validDate->day <= 30);
    }
    return 1;
}

void printDate(struct myDate *date)
{
    if (isValidDate(date) == 1)
    {
        printf("Day : %d , Month: %d, Year: %d\n", date->day, date->month, date->year);
    }
    else
    {
        printf("Invalid Date\n");
    }
}

int main(void)
{
    struct myDate d1 = {18, 10, 1998};
    printDate(&d1);
    struct myDate d2 = {2, 12, 2013};
    printDate(&d2);
    struct myDate d3 = {29, 2, 2021};
    printDate(&d3);
    return 0;
}