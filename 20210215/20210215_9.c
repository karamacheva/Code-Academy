#include <stdio.h>

/*Задача 9. Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?
Вземете бележката от масата, на нея пише в кое чекмедже (на скрина)
ще намерите бележката, на която пише къде е палтото (в гардероба);
Обърнете внимание на броя на звездичките!*/

int main(void)
{
    int a = 7;
    int *ptr = &a;
    int **pptr = &ptr;
    **pptr = 15;
    printf("The value of a:%d\n", a);
    return 0;
}