#include <stdio.h>
#include <string.h>

/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/

int myStrend(char *, char *);

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "llo";
    printf("String 1 is find of end of string 2  or not? %d", myStrend(str1, str2));
    return 0;
}

int myStrend(char *s, char *t)
{
    int len;
    len = strlen(t);
    while (*s != '\0')
    {
        ++s;
    }
    --s;
    while (*t != '\0')
    {
        ++t;
    }
    --t;
    while (len > 0)
    {
        if (*t == *s)
        {
            --t;
            --s;
            --len;
        }
        else
        {
            return 0;
        }
    }
    if (len == 0)
    {
        return 1;
    }
}