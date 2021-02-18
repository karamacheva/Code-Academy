#include <stdio.h>
#include <stdlib.h>

/*Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */

int *countOccurance(char *str)
{
    int *ptrArrayOccurance = NULL;
    ptrArrayOccurance = (int *)calloc(26, sizeof(int));
    int i;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            i = *str - 'a';
            (*(ptrArrayOccurance + i))++;
        }
        *str++;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c occurs %d times in the string.\n", (i + 'a'), *(ptrArrayOccurance + i));
    }
    return ptrArrayOccurance;
    free(ptrArrayOccurance);
}

int main(void)
{
    char string[] = "one, two, three, four, five,once i caught a fish alive,six, seven, eight, nine, ten,then i let go again.";
    int *ptr;
    ptr = countOccurance(string);
    return 0;
}