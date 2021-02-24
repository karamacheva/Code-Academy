#include <stdio.h>
/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/

#define concat(x, y) x##y

int main(void)
{
    concat(print, f)("Hello world\n");
    int x = concat(2, 3);
    printf("x=%d\n", x);
    return 0;
}