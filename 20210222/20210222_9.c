#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/

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

void printValue(union myUnion *ptrValue, enum myEnum value)
{
    char buff[5];
    if (value == VALUE_INT)
    {
        printf("int to str: %s\n", itoa(ptrValue->number,buff,10));
    }
    else
    {
        printf("string to int: %d\n", atoi(ptrValue->str));
    }
}

int main(void)
{
    union myUnion value = {65};
    printValue(&value, VALUE_INT);
    strcpy(value.str, "123");
    printValue(&value, VALUE_STR);
    return 0;
}