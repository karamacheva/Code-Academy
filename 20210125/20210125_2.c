#include <stdio.h>

int main(void)
{
    int c;
    int countLine = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            countLine++;
        }
    }
    printf("\nThe count of line is: %d", countLine);
    return 0;
}