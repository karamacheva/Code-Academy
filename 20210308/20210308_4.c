/*Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който 
искаме да прочетем, освен ако не стигне терминиращия символ за край 
на реда \n или \0 първо, третият е пойнтер към файла;*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 16

int main(void)
{
    FILE *fp;
    char str[BUFSIZE];
    fp = fopen("file.txt", "rt");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    if (fgets(str, 16, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}