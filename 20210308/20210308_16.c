/*Напишете програма, която премахва от файл номер на ред и 
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а 
запишете съдържанието на файла без конкретния ред в друг файл).*/

#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 256

void printFile(FILE *fp)
{
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
}

void deleteLine(FILE *fp, FILE *fp1, const int line)
{
    char buffer[BUFFSIZE];
    int count = 1;
    while ((fgets(buffer, BUFFSIZE, fp)) != NULL)
    {
        if (line != count)
        {
            fputs(buffer, fp1);
        }
        count++;
    }
}

int main(void)
{
    FILE *fp;
    FILE *fp1;
    fp = fopen("myfile16.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fp1 = fopen("myfile16_1.txt", "w");
    if (fp1 == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    int line;
    printf("Enter line number to remove: ");
    scanf("%d", &line);
    printf("File before removing line.\n");
    printFile(fp);
    rewind(fp);
    deleteLine(fp, fp1, line);
    fclose(fp);
    fclose(fp1);
    printf("\nFile  after removing %d line.\n", line);
    fp1 = fopen("myfile16_1.txt", "r");
    printFile(fp1);
    fclose(fp1);

    return 0;
}