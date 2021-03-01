#include <stdio.h>
#include <string.h>

/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/

typedef struct
{
    int number;
    char str[32];
} key_t;

int main(void)
{
    key_t p = {21, "Ekaterina"};
    printf("My struct : %d,%s\n", p.number, p.str);
    return 0;
}
