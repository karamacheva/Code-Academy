#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/

char *changeWord(char *str, char *oldWord, char *newWord)
{
    char *newStr;
    int i, count = 0;
    int newWordlen = strlen(newWord);
    int oldWordlen = strlen(oldWord);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += oldWordlen - 1;
        }
    }
    newStr = (char *)malloc(i + count * (newWordlen - oldWordlen) + 1);
    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&newStr[i], newWord);
            i += newWordlen;
            str += oldWordlen;
        }
        else
            newStr[i++] = *str++;
    }
    newStr[i] = '\0';
    return newStr;
}

int main(void)
{
    char str[] = "I am a poor programmer";
    char o[] = "poor";
    char n[] = "great";
    char *newStr = NULL;
    printf("The old string: %s\n", str);
    newStr = changeWord(str, o, n);
    printf("The new string: %s\n", newStr);
    free(newStr);
    return 0;
}