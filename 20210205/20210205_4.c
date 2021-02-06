#include <stdio.h>

/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/

int myStrCmp(char *, char *);

int main(void)
{
    char str1[] = "Hello world!";
    char str2[] = "Hello";
    printf("String 1 and string 2 is equal or not? %d", myStrCmp(str1, str2));
    return 0;
}

int myStrCmp(char *str1, char *str2)
{
    int i = 0;
    int isEqual = 0;
    while (isEqual == 0)
    {
        if (str1[i] > str2[i])
        {
            isEqual = 1;
        }
        else if (str1[i] < str2[i])
        {
            isEqual = -1;
        }

        if (str1[i] == '\0')
        {
            break;
        }

        i++;
    }
    return isEqual;
}