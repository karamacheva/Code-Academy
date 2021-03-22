/*Напишете програма, която намира всички различни начини за разлагане на дадена сума S (S≤100) посредством даден набор от монети.
 Паричната система включва монети A, B, C и D, като е известно, че: xA=1B, yB=1C, zC=1D. Сумата S е зададена като стойност, изразена в А.
Вход: Входният файл IN1.TXT съдържа няколко тестови примера. Всеки пример е разположен на 1 ред, в който са записани 4 цели числа, 
разделени с поне 1 интервал, представляващи стойности съответно на S, x, y и z.
Изход: За всеки текстов пример в изходния файл OUT1.TXT се записва на:
1 ред – думата ТЕСТ, последвана от поредния номер на текстовия пример.
Следващите редове – всички възможни разположения на дадената сума. За всяко от тях се извеждат по 4 числа на ред, 
представляващи съотвегтно броя монети от тип А, броя монети от тип В, броя монети от тип С и броя монети от тип D.
Примерен вход: 23 5 2 2
Примерен изход:
ТЕСТ 1
23 0 0 0
18 1 0 0
13 2 0 0
8 3 0 0
3 4 0 0
13 0 1 0
8 1 1 0
3 2 1 0
3 0 2 0
3 0 0 1 */
#include "1.h"

int main(void)
{

    FILE *fpIn = NULL;
    FILE *fp = NULL;
    FILE *fpOut = NULL;

    fp = fopen("myfile.txt", "w");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    t_coins p = {23, 5, 2, 2};
    fwrite(&p, sizeof(t_coins), 1, fp);
    if (fwrite != 0)
    {
        printf("Contents to file written successfully !\n");
    }
    else
    {
        printf("Error writing file !\n");
    }
    fclose(fp);

    fpIn = fopen("myfile.txt", "r");
    if (fpIn == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    t_coins p1;
    while (fread(&p1, sizeof(t_coins), 1, fpIn))
    {
        initializeCoins(&p1);
        printf("The S:%d, B:%d, C:%d, D:%d\n", p1.S, p1.B, p1.C, p1.D);
    }

    fpOut = fopen("myfile1.txt", "w");
    if (fpOut == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fputs("Test 1: \n", fpOut);
    printCombinations(&p1,fpOut);

    fclose(fpIn);
    fclose(fpOut);
    return 0;
}
