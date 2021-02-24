#include <stdio.h>

/*Задача 9. Напишете макрос, който прави идентификатор на низ (стринг)*/

#define MYSTR(x) #x

int main(void)
{
    int value1 = 1;
    printf(MYSTR(value1));
    printf("\n");
    char str[] = "Hello Ekaterina!";
    printf(MYSTR(str));
    printf("\n");
    printf(MYSTR("Hello Ekaterina"));
    printf("\n");
    printf(MYSTR(1));
    return 0;
}