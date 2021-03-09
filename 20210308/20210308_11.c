/*Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("file3.txt", "wt+");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fputs("This is my first string.\n", fp);
    fputs("I am happy to do this", fp);
    fpos_t *position;
    if (fgetpos(fp, position) == 0)
    {
        printf("The position is: %ld\n", *position);
    }
    else
    {
        printf("ERROR!\n");
    }
    fclose(fp);
    return 0;
}