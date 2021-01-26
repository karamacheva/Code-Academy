#include <stdio.h>

int main(void)
{
    int c;
    int countLine = 0;
    int countTab = 0;
    int countSpace = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++countLine;
        }
        if (c == '\t')
        {
            ++countTab;
        }
        if (c == ' ')
        {
            ++countSpace;
        }
    }
    printf("\nThe count of line is: %d", countLine);
    printf("\nThe count of tab is: %d", countTab);
    printf("\nThe count of space is: %d", countSpace);
    return 0;
}