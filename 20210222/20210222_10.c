#include<stdio.h>
#include<string.h>

/*Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/

enum myEnum
{
    VALUE_INT,
    VALUE_STR
};

union myUnion
{
    int number;
    char str[64];
};

struct myStruct
{
    enum myEnum type;
    union myUnion variable;
};

void printValue(struct myStruct *ptrValue)
{
    if (VALUE_INT == ptrValue->type)
    {
        printf("int: %d\n", ptrValue->variable.number);
    }
    else if (VALUE_STR == ptrValue->type)
    {
        printf("string: %s\n", ptrValue->variable.str);
    }
}

int main(void)
{
    struct myStruct value = {VALUE_INT, 18};
    printValue(&value);
    value.type = VALUE_STR;
    strcpy(value.variable.str, "Ekaterina");
    printValue(&value);
    return 0;
}
