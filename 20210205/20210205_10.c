#include <stdio.h>
#include <string.h>

/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.
*/

void myStrncat(char *s, char *t, unsigned int n)
{
    char *ptr = s + strlen(s);
    while (*t != '\0' && n--)
    {
        *ptr++ = *t++;
    }
    *ptr = '\0';
    return;
}

int main(void)
{
    char str1[] = "Hello I am ";
    char str2[] = "Ekaterina";
    myStrncat(str1, str2, 4);
    printf("The new string is: %s", str1);
    return 0;
}
