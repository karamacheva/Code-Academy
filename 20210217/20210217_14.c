#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.*/

void *sortString(char *str)
{
    char temp;
    int i, j;
    int length = strlen(str);
    for (i = 0; i < length - 1; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int isAnagrams(char *str1, char *str2)
{
    int flag = 1;
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    if (length1 == length2)
    {
        sortString(str1);
        sortString(str2);
        printf("%s\n", str1);
        printf("%s\n", str2);
        /*for (i = 0; i < length1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 0;
                break;
            }
        }*/
        while (*str1 && *str2)
        {
            if (*str1 != *str2)
            {
                flag = 0;
                break;
            }
            *str1++;
            *str2++;
        }
    }
    else
    {
        flag = 0;
    }
    return flag;
}

int main(void)
{
    char str1[] = "ekat";
    char str2[] = "kate";
    (isAnagrams(str1, str2) == 1) ? printf("Str1 and Str2 is anagrams\n") : printf("Str1 and str2 is NOT Anagrams\n");
    return 0;
}