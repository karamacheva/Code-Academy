/*Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long 
int, който отговаря на позицията във файла.
Дефинирате променлива 
long fpos = ftell(pfile) 
Променливата съхранява текущата ви позицията в байтове от 
началото на файла и вие можете да се върнете на нея по всяко 
време*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("file2.txt", "wt");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fputs("This is my first string.\n", fp);
    fputs("I am happy to do this", fp);
    long int position = ftell(fp);
    printf("The position is: %ld\n", position);
    fclose(fp);
    return 0;
}