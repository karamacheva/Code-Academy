/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINELENGTH 60
#define LINESPERPAGE 42

void printpage(FILE *fp1, FILE *fp2)
{
    int c;
    int line = 0;
    int page = 1;
    while ((c = getc(fp1)) != EOF)
    {
        putc(c, fp2);
        if (c == '\n')
        {
            line = line + 1;
            if (line == LINESPERPAGE)
            {
                fprintf(stdout, "\n\t\t\tPage %d End.\n\n", page);
                page = page + 1;
                line = 0;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen(*++argv, "r");
    char *prog = argv[0];
    int linecount = 0;
    if (argc == 1)
    {
        fprintf(stderr, "No files given");
        printpage(stdin, stdout);
    }
    else
        while (--argc > 0)
            if (fp == NULL)
            {
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                exit(1);
            }
            else
            {
                fprintf(stdout, "\n\n\t\t\tFile: %s\n\n", *argv);
                printpage(fp, stdout);
                fclose(fp);
            }
    if (ferror(stdout))
    {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }
    return 0;
}