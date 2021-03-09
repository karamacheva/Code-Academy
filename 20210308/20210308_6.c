/*Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем. 
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 16

int main(void)
{
    char str1[BUFSIZE], str2[BUFSIZE];
    int age;
    FILE *fp;
    fp = fopen("myfile6.txt", "wt+");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fputs("Ekaterina Karmacheva 22", fp);
    rewind(fp);
    fscanf(fp, "%s %s %d", str1, str2, &age);
    printf("Read String1 :%s\n", str1);
    printf("Read String2 :%s\n", str2);
    printf("Read Age: %d\n", age);
    fclose(fp);

    return (0);
}