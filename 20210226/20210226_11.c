#include <stdio.h>
#include <stdlib.h>
/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/

typedef struct node
{
    int value;
    struct node *node;
} t_node;
int main()
{
    t_node *n = (t_node *)malloc(sizeof(t_node));
    printf("The size of n :%d\n", sizeof(n));
    free(n);
    return 0;
}
