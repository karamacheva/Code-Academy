/*Напишете програма, която печата съдържанието на файл в обратен 
ред.
Използвайте fseek функцията, за да отидете накрая на файла. 
Използвайте ftell функцията, за да намерите позицията на пойнтера. 
Покажете на екран файла, обърнат в обратен ред.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int count, i;
    fp = fopen("myfile15.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    count = ftell(fp);
    while (i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }
    printf("\n");
    fclose(fp);
    return 0;
}