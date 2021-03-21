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

#include <stdio.h>

typedef struct coins
{
    int A, B, C, D;
} t_coins;

void initializeCoins(t_coins *p, int x, int y, int z)
{
    p->A = 1;
    p->B = x * p->A;
    p->C = y * p->B;
    p->D = z * p->C;
}

void printCoins(t_coins *p)
{
    printf("The A:%d, B:%d, C:%d, D:%d\n", p->A, p->B, p->C, p->D);
}

/*void getCombination(int *arr, int index, int num, int decrement)
{
    if (decrement < 0)
        return;
    if (decrement == 0)
    {
        for (int i = 0; i < index; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    int prev;
    if (index == 0)
        prev = 1;
    else
        prev = arr[index - 1];
    for (int k = prev; k <= num; k++)
    {
        arr[index] = k;
        getCombination(arr, index + 1, num, decrement - k);
    }
}*/

int *createArray(int *arr, t_coins *p)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        arr[0] = p->A;
        arr[1] = p->B;
        arr[2] = p->C;
        arr[3] = p->D;
    }
    return arr;
}

void findCombinations(int *arr, int *data, t_coins *p, int index)
{
    arr = createArray(arr, p);
    int i, j;
    if (index == 4)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
    for (int i = 0; i <= 0 && 0 - i + 1 >= 4 - index; i++)
    {
        data[index] = arr[i];
        findCombinations(arr, data, p, index + 1);
    }
}

void combinationDisplay(int *arr1, t_coins *p, int n)
{
    int data[4];
    findCombinations(arr1, data, p, 0);
}

int main(void)
{
    t_coins p1 = {0};
    int x = 5, y = 2, z = 2;
    initializeCoins(&p1, x, y, z);
    printCoins(&p1);
    int arr[4];
    int *p = createArray(arr, &p1);
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d ", *(p + i));
    }
    combinationDisplay(arr, &p1, 4);
    return 0;
}
