#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *passGenerator(char *str, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        str[i] = 33 + rand() % 89;
    }
    return str;
}

int main()
{
    char password[64];
    srand(time(0));
    int size;
    char *(*passwordGener)(char *, int) = passGenerator;
    printf("Enter a password size: ");
    scanf("%d", &size);
    printf("%s", passwordGener(password, size));
    return 0;
}