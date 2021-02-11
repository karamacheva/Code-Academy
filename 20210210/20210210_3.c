#include <stdio.h>

/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/

int isPalidrome();

int main()
{
    (isPalidrome() == 1) ? printf("It's a palidrome.\n") : printf("It's not a palidrome.\n");
    return 0;
}

int isPalidrome()
{
    char c, str[100], *end, *start;
    int i = 0;
    int isPalidrome;
    while ((c = getchar()) != '\n')
    {
        str[i++] = c;
        str[i] = '\0';
    }
    end = &str[i];
    start = str;
    while (start < end)
    {
        if ((*start < 'a' || *start > 'z') && (*start < 'A' || *start > 'Z'))
        {
            start++;
            continue;
        }
        if ((*end < 'a' || *end > 'z') && (*end < 'A' || *end > 'Z'))
        {
            end--;
            continue;
        }

        if (*start == *end)
        {
            isPalidrome = 1;
        }
        else
        {
            isPalidrome = 0;
        }
        start++;
        end--;
    }
    return isPalidrome;
}