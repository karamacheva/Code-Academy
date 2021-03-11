/*Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cmpFiles(FILE *fp1, FILE *fp2)
{
    char ch1 = getc(fp1);
    char ch2 = getc(fp2);
    int error = 0, pos = 0, line = 1;
    while (ch1 != EOF && ch2 != EOF)
    {
        pos++;
        if (ch1 == '\n' && ch2 == '\n')
        {
            line++;
            pos = 0;
        }
        if (ch1 != ch2)
        {
            error++;
            printf("Line Number : %d Position : %d \n", line, pos);
        }
        ch1 = getc(fp1);
        ch2 = getc(fp2);
    }
    printf("Total Errors : %d\n", error);
}

int main(void)
{
    FILE *fp1;
    fp1 = fopen("myfile1.txt", "r");
    FILE *fp2;
    fp2 = fopen("myfile1_2.txt", "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error : Files not open");
        exit(0);
    }
    cmpFiles(fp1, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}