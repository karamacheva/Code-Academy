/*Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    fp = fopen("myfile2.txt", "r");
    char c;
    int curlybracket = 0;
    int curlybracketr = 0;
    int squarebracket = 0;
    int squarebracketr = 0;
    int parentheses = 0;
    int parenthesesr = 0;
    int i;
    int error = 0, pos = -1, line = 1;
    int lineCurly,lineSquare,lineParenthess,posCurly,posSquare,posParenthess;
    if (fp == NULL)
    {
        printf("Problem opening file!\n");
        exit(0);
    }

    else
    {
        printf("File opened correctly\n");
    }

    while (c != EOF)
    {
        pos++;
        if (c == '\n')
        {
            line++;
            pos = 0;
        }
        if (c == '{')
        {
            curlybracket++;
            lineCurly=line;
            posCurly=pos;
        }

        if (c == '[')
        {
            squarebracket++;
            lineSquare=line;
            posSquare=pos;
        }

        if (c == '(')
        {
            parentheses++;
            lineParenthess=line;
            posParenthess=pos;
        }

        if (c == '}')
        {
            curlybracketr++;
            lineCurly=line;
            posCurly=pos;
        }

        if (c == ']')
        {
            squarebracketr++;
            lineSquare=line;
            posSquare=pos;
        }

        if (c == ')')
        {
            parenthesesr++;
            lineParenthess=line;
            posParenthess=pos;
        }
        c = getc(fp);
    }
    if (curlybracket == curlybracketr)
    {
        printf("There are an equal number of curlybrackets\n");
    }
    else
    {
        printf("There is an unequal number of curlybrackets\n");
        error++;
        printf("Line Number : %d Position : %d \n", lineCurly, posCurly);
        return 0;
    }

    if (squarebracket == squarebracketr)
    {
        printf("There are an equal number of squarebrackets\n");
    }
    else
    {
        printf("There are an unequal number of squarebrackets\n");
        error++;
        printf("Line Number : %d Position : %d \n", lineSquare, posSquare);
    }

    if (parentheses == parenthesesr)
    {
        printf("There are an equal number of parentheses\n");
    }
    else
    {
        printf("There are an unequal number of parentheses\n");
        error++;
        printf("Line Number : %d Position : %d \n", lineParenthess, posParenthess);
    }
    printf("Total Errors : %d\n", error);
    fclose(fp);

    return 0;
}