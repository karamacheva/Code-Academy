#include <stdio.h>

/*Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc.*/

void myStrcat(char *, char *);

int main(void)
{
    char str1[] = "Hello I am ";
    char str2[] = "Ekaterina";
    myStrcat(str1, str2);
    printf("The new string is: %s", str1);
    return 0;
}

void myStrcat(char *s, char *t)
{
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
        ;
    for (j = 0; t[j] != '\0'; j++)
    {
        s[i + j] = t[j];
    }
    s[i + j] = '\0';
    return;
}