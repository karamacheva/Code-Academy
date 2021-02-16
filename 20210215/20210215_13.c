#include <stdio.h>

/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/

int length(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        *str++;
    }
    return count;
}

int main(void)
{
    char *str = "Hello world";
    printf("The length of string is: %d\n", length(str));
    return 0;
}
