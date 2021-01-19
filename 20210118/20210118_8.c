#include <stdio.h>

/*Упражнение 8*. Напишете функция int isLetter(char c), която проверява дали
подадения параметър е буква или не е буква от ASCII таблицата. Из*/

int isLetter(char c)
{
    int isLetter = 0;
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        isLetter = 1;
    }
    return isLetter;
}
int main(void)
{
    char c;
    c = getchar();
    isLetter(c) == 1 ? printf("The given char is letter\n") : printf("The given char is not letter\n");
    return 0;
}