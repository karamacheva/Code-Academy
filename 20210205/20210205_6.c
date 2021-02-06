#include <stdio.h>
#include <string.h>

/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/

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
    char *ptr = s + strlen(s);
    while (*t != '\0')
    {
        *ptr++ = *t++;
    }
    *ptr = '\0';
    return;
}