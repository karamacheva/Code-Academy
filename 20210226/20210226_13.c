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
    int hour, minute, second;
} t_myTime;

int isValidTime(t_myTime *ptrTime)
{
    if ((ptrTime->second < 0 && ptrTime->second > 59) || (ptrTime->minute < 0 && ptrTime->minute > 59) || (ptrTime->hour < 0 && ptrTime->hour > 23))
    {
        return 0;
    }
    return 1;
}

void addSeconds(int seconds, t_myTime *ptrTime)
{
    int sumSeconds = ptrTime->second + seconds;//42+88=130
    int minutes = ptrTime->minute;//58
    while (sumSeconds >= 60)
    {
        minutes++;//59//60
        while (minutes >= 60)
        {
            ptrTime->hour++;//13
            if (ptrTime->minute == 60)//
            {
                ptrTime->minute = 0;
            }
            else
            {
                ptrTime->minute = minutes - 60;
            }
            minutes -= 60;//0
        }
        if (ptrTime->second == 60)
        {
            ptrTime->second = 0;
        }
        else//130-60=70//70-60=10
        {
            ptrTime->second = sumSeconds - 60;
        }
        sumSeconds -= 60;//70//10
    }
    return;
}

void addMinutes(int minutes, t_myTime *ptrTime)
{
    ptrTime->minute += minutes;
    return;
}

void addHours(int hours, t_myTime *ptrTime)
{
    ptrTime->hour += hours;
    return;
}

int getSeconds(t_myTime *ptrTime) /*return seconds in tyme*/
{
    return ptrTime->second;
}

t_myTime add(t_myTime *t1, t_myTime *t2) /*add two times */
{
    t_myTime t;
    t.hour = t1->hour + t2->hour;
    t.minute = t1->minute + t2->minute;
    t.second = t1->second + t2->second;
    return t;
}

t_myTime diffrence(t_myTime *t1, t_myTime *t2)
{
    t_myTime t;
    t.hour = t1->hour - t2->hour;
    t.minute = t1->minute - t2->minute;
    t.second = t1->second - t2->second;
    return t;
}

void printTime(t_myTime *t)
{
    printf("%d:%d:%d\n", t->hour, t->minute, t->second);
}

int main(void)
{
    t_myTime t1 = {12, 58, 42};
    printTime(&t1);
    t_myTime t2 = {5, 10, 17};
    printTime(&t2);
    /*t_myTime t3 = add(&t1, &t2);
    printTime(&t3);
    t_myTime t4 = diffrence(&t1, &t2);
    printTime(&t4);*/
    addSeconds(88, &t1);
    /*addMinutes(10, &t1);
    addHours(5, &t1);*/
    printTime(&t1);
    return 0;
}
