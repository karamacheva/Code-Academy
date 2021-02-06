#include <stdio.h>
#include <string.h>

/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s*/

void myStrncpy(char *s, char *t, unsigned int n)
{
    char* ptr = s;
    while (*t && n--)
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
    return;
}

int main(void)
{
    char str1[] = "Hello I am ";
    char str2[] = "Ekaterina";
    myStrncpy(str1, str2, 4);
    printf("The new string is: %s", str1);
    return 0;
}