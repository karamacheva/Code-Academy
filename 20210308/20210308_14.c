/*Задача 14.
Напишете програма, която да обръща всички символи в 
текстов файл, с главни букви запишете резултата в друг 
временен файл. След това преименувайте новия файл 
с името на оригиналния файл и изтрийте временното 
име. Отпечатайте съдържанието на файл на 
стандартния изход с главни букви.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char c;
    FILE *fp;
    FILE *fp1;
    fp = fopen("myfile14_1.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fp1 = fopen("myfile14_2.txt", "wt+");
    if (fp1 == NULL)
    {
        perror("Error opening file");
        exit(1);
    }

    c = getc(fp);
    printf("New file: \n");
    while (!feof(fp))
    {
        c = toupper(c);
        printf("%c", c);
        fputc(c, fp1);
        c = getc(fp);
    }

    fclose(fp);
    fclose(fp1);

    remove("myfile14_1.txt");
    rename("myfile14_2.txt", "myfile14_1.txt");
    remove("myfile14_2.txt");

    return 0;
}