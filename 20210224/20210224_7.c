/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.*/
#include <stdio.h>
#ifndef header7_h
#define header7_h printf("Header is defined");

#endif

int main(void)
{
    header7_h;
    return 0;
}
