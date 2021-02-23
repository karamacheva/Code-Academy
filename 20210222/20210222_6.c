#include <stdio.h>

/*Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/

struct myTime
{
    int hour, minute, second;
};

void addSeconds(int seconds, struct myTime *ptrTime)
{
    ptrTime->second += seconds;
    return;
}

void addMinutes(int minutes, struct myTime *ptrTime)
{
    ptrTime->minute += minutes;
    return;
}

void addHours(int hours, struct myTime *ptrTime)
{
    ptrTime->hour += hours;
    return;
}

int getSeconds(struct myTime *ptrTime)
{
    return ptrTime->second;
}

struct myTime add(struct myTime *t1, struct myTime *t2)
{
    struct myTime t;
    t.hour = t1->hour + t2->hour;
    t.minute = t1->minute + t2->minute;
    t.second = t1->second + t2->second;
    return t;
}

struct myTime diffrence(struct myTime *t1, struct myTime *t2)
{
    struct myTime t;
    t.hour = t1->hour - t2->hour;
    t.minute = t1->minute - t2->minute;
    t.second = t1->second - t2->second;
    return t;
}

void printTime(struct myTime *t)
{
    printf("%d:%d:%d\n", t->hour, t->minute, t->second);
}

int main(void)
{
    struct myTime t1 = {12, 23, 42};
    printTime(&t1);
    struct myTime t2 = {5, 10, 17};
    printTime(&t2);
    struct myTime t3 = add(&t1, &t2);
    printTime(&t3);
    struct myTime t4 = diffrence(&t1, &t2);
    printTime(&t4);
    addSeconds(15, &t1);
    addMinutes(10, &t1);
    addHours(5, &t1);
    printTime(&t1);
    return 0;
}
