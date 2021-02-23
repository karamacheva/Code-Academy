#include <stdio.h>
#include <string.h>

/*Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/

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
    if (value == VALUE_INT)
    {
        printf("int: %d\n", ptrValue->number);
    }
    else
    {
        printf("string: %s\n", ptrValue->str);
    }
}

int main(void)
{
    union myUnion value = {65};
    printValue(&value, VALUE_INT);
    strcpy(value.str, "Ekaterina");
    printValue(&value, VALUE_STR);
    return 0;
}
