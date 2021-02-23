#include <stdio.h>

/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3=2020,.member1=21, .memeber2=2};*/

struct date
{
    int day, month, year;
}; /*Първи начин да напишем contractdate тук*/

void printDate(struct date *date)
{

    printf("Day : %d , Month: %d, Year: %d\n", date->day, date->month, date->year);
}

int main(void)
{
    struct date contractday = {21, 2, 2020};
    printDate(&contractday);
    struct date contractday1;
    contractday1.day = 18;
    contractday1.month = 10;
    contractday1.year = 1998;
    printDate(&contractday1);
    struct date contractday2 = {.day = 2, .month = 12, .year = 2013};
    printDate(&contractday2);
    return 0;
}