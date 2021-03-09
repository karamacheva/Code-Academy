/*Задача 13.
Напишете програма, която да намери общия брой на 
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст. 
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да 
брои броя на редовете.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = fopen("myfile13.txt", "r");
    char ch;
    int lines = 0;
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            lines++;
    }
    printf("The count of lines is %d\n", lines);
    fclose(fp);
}