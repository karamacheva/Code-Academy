#include <stdio.h>
#include <stdlib.h>

/*Задача 13.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef.*/
typedef struct
{
    unsigned int hour, minute, second;
} t_myTime;

int isValidTime(t_myTime *ptrTime)
{
    if ((ptrTime->second < 0 && ptrTime->second > 59) || (ptrTime->minute < 0 && ptrTime->minute > 59) || (ptrTime->hour < 0 && ptrTime->hour > 23))
    {
        return 0;
    }
    return 1;
}

void addSeconds(unsigned int seconds, t_myTime *ptrTime)
{
    ptrTime->second += seconds;   /*42+78=120,60*/
    while (ptrTime->second >= 60) /*120*/
    {
        ptrTime->minute++;         /*58+1=59,59+1=60*/
        if (ptrTime->minute >= 60) /*59,*/
        {
            ptrTime->hour++; /*24*/
            if (ptrTime->hour >= 24)
            {
                ptrTime->hour -= 24;
            }
            if (ptrTime->minute == 60) /*0*/
            {
                ptrTime->minute = 0;
            }
        }
        ptrTime->second -= 60; /*120-60=60,0*/
    }
    return;
}

void addMinutes(unsigned int minutes, t_myTime *ptrTime)
{
    ptrTime->minute += minutes; /*35+17=52*/
    while (ptrTime->minute >= 60)
    {
        ptrTime->hour++;
        if (ptrTime->hour >= 24)
        {
            ptrTime->hour -= 24;
        }
        ptrTime->minute -= 60;
    }
    return;
}

void addHours(unsigned int hours, t_myTime *ptrTime)
{
    ptrTime->hour += hours;/*23+5=28==4*/
    while (ptrTime->hour >= 24)
    {
        ptrTime->hour -= 24;
    }
    return;
}

unsigned int getSeconds(t_myTime *ptrTime) /*return seconds in time*/
{
    return ptrTime->second;
}

void getTime(unsigned int seconds, t_myTime *t)
{
    /*t.hour = (seconds / 3600);
    t.minute = (seconds - (3600 * t.hour)) / 60;
    t.second = (seconds - (3600 * t.hour) - (t.minute * 60));*/
    t->hour = (seconds / 3600);
    t->minute = (seconds / 60) % 60;
    t->second = seconds % 60;
}

void addTime(t_myTime *t1, t_myTime *t2, t_myTime *add) /*add two times */
{
    add->hour = t1->hour + t2->hour;
    add->minute = t1->minute + t2->minute;
    add->second = t1->second + t2->second;
    if (add->second >= 60)
    {
        add->minute++;
        add->second -= 60;
    }
    if (add->minute >= 60)
    {
        add->hour++;
        add->minute -= 60;
    }
    if (add->hour >= 24)
    {
        add->hour -= 24;
    }
    return;
}

void diffrence(t_myTime *t1, t_myTime *t2, t_myTime *diff)
{
    if (t1->hour > t2->hour)
    {
        while (t2->second > t1->second)
        {
            --t1->minute;
            t1->second += 60;
        }
        diff->second = t1->second - t2->second;
        while (t2->minute > t1->minute)
        {
            --t1->hour;
            t1->minute += 60;
        }
        diff->minute = t1->minute - t2->minute;
        diff->hour = t1->hour - t2->hour;
    }
    else
    {
        while (t1->second > t2->second)
        {
            --t2->minute;
            t2->second += 60;
        }
        diff->second = t2->second - t1->second;
        while (t1->minute > t2->minute)
        {
            --t2->hour;
            t2->minute += 60;
        }
        diff->minute = t2->minute - t1->minute;
        diff->hour = t2->hour - t1->hour;
    }
    return;
}

void printTime(t_myTime *t)
{
    printf("%u:%u:%u\n", t->hour, t->minute, t->second);
}

int main(void)
{
    t_myTime t1 = {23, 58, 42};
    printTime(&t1);
    t_myTime t2 = {5, 10, 17};
    printTime(&t2);
    t_myTime t3 = {0};
    addTime(&t1, &t2, &t3);
    printTime(&t3);
   /* t_myTime t4 = {0};
    diffrence(&t1, &t2, &t4);
    printTime(&t4);*/
    /*addSeconds(138, &t1);
    addMinutes(20, &t2);*/
    /*addHours(30, &t1);
    /*addMinutes(1, &t1);
    printTime(&t1);
    printTime(&t2);*/
    t_myTime t5 = {0};
    getTime(25300, &t5);
    printTime(&t5);
    return 0;
}
