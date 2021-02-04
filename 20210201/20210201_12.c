#include <stdio.h>

/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/

int any(char *str1, char *str2)
{
    int i, j, position = -1;
    for (i = 0; str1[i] != 0; i++)
    {
        for (j = 0; str2[j] != 0; j++)
        {
            if (str1[i] == str2[j])
            {
                position = i;
            }
        }
    }
    return position;
}

int main(void)
{
    char str1[] = "Hello world";
    char str2[] = "hi i am Ekaterina";
    printf("The position of equal cymbol is: %d", any(str1, str2));
    return 0;
}