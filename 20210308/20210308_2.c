/*Създайте test.txt файл в избрана от вас директория. Сложете 
някакви данни в него на латиница- име, поздрав, брой. Отворете 
файла за редактиране. Внимавайте за мястото, къде поставяте 
файла. Трябва да е там, където е сорс файлът.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *pfile = NULL;
    char *filename = "test.txt";
    pfile = fopen(filename, "wt");
    if (pfile == NULL)
    {
        printf("Failed to open % s.\n", filename);
    }
    fclose(pfile);
    if (!rename("C:\\Users\\kati\\codeAcademy\\20210308\\test.txt", "C:\\Users\\kati\\codeAcademy\\20210308\\copy_test.txt"))
    {
        printf("Failed to rename file.");
    }
    else
    {
        printf("File renamed successfully.");
    }
    remove("test.txt");
    return 0;
}