#include <stdio.h>

/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/

enum myEnum
{
    ONE = 1,
    TWO,
    THREE
};
struct myStruct
{
    int ivalue;
    char str[50];
    double dvalue;
    enum myEnum evalue;
};

void inputStruct(struct myStruct *s)
{
    printf("Enter  iValue: ");
    scanf("%d", &s->ivalue);
    printf("Enter str: ");
    scanf("%s", &s->str);
    printf("Enter dvalue: ");
    scanf("%lf", &s->dvalue);
}

int main(void)
{
    int i;
    struct myStruct s[20];
   /* for (i = 0; i < 20; i++)
    {
        printf("%d,%s,%.2lf,%d\n", s[i]->ivalue, s[i]->str, s[i]-> dValue, s[i]->evalue);
    }*/
    return 0;
}
