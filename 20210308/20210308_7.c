/*Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    int ch = 96;
    fp = fopen("myfile7.txt", "wt+");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fputs(ch, fp);
    fclose(fp);

    return (0);
}