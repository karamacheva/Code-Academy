#include <stdio.h>

int main(void)
{
    char c;
    while ((c = getchar()) != '?')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            putchar(c);
        }
    }
    return 0;
}