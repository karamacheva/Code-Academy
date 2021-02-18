#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.*/

char *passGenerator(char *str)
{
    int i;
    for (i = 0; i < 8; i++)
    {
        str[i] = 33 + rand() % 89;
    }
    return str;
}

int main()
{
    char password[8] = "";
    srand(time(0));
    char *(*passwordGener)(char *) = passGenerator;
    printf("%s", passwordGener(password));
    return 0;
}