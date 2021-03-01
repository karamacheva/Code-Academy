#include <stdio.h>

/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/

typedef struct
{
    int tAge;
    float grade;
} t_myStruct;

int main(void)
{
    t_myStruct p = {21, 5.42};
    printf("My struct p: %d,%.2f\n", p.tAge, p.grade);
    return 0;
}