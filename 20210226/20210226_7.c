#include <stdio.h>

/*
Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.

*/

#define BUFF 23

typedef struct
{
    int number;
    char str[BUFF];
} t_key;

int main(void)
{
    int i;
    t_key arr[BUFF] = {{0, "auto"}, {1, "break"}, {2, "case"}, {3,"char"}, {4, "continue"}, {5, "do"}, {6, "default"}, {7, "const"}, {8, "else"}, {9, "enum"}, {10, "extern"}, {11, "for"}, {12, "if"}, {13, "goto"}, {14, "return"}, {15, "static"}, {16, "sizeof"}, {17, "struct"}, {18, "switch"}, {19, "typedef"}, {20, "union"}, {21, "void"}, {22, "while"}};

    for (i = 0; i < BUFF; i++)
    {
        printf("%d\t%s\n", arr[i].number, arr[i].str);
    }

    return 0;
}