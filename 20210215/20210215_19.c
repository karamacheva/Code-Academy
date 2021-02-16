#include <stdio.h>
#include <string.h>

/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/

void changeCymbol(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'o';
        }
        else
        {
            continue;
        }
    }
    return;
}

int main(void)
{
    char str[] = "baba,kaka,mama";
    changeCymbol(str);
    printf("The new string is: %s\n", str);
    return 0;
}