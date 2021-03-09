/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LBOARD 4
#define SBOARD 6
#define SBRACKET 12
#define BBRACKET 2
#define SCREWS 12

typedef struct shelf
{
    int longBoard, shortBoard, smallBracket, bigBracket, screws;
} t_shelf;

int main(void)
{
    int i;
    t_shelf *available = (t_shelf *)malloc(sizeof(t_shelf));
    printf("Please enter a value of long board:\n");
    scanf("%d", &available->longBoard);
    fflush(stdin);
    printf("Please enter a value of short board:\n");
    scanf("%d", &available->shortBoard);
    fflush(stdin);
    printf("Please enter a value of small bracket:\n");
    scanf("%d", &available->smallBracket);
    fflush(stdin);
    printf("Please enter a value of big bracket:\n");
    scanf("%d", &available->bigBracket);
    fflush(stdin);
    printf("Please enter a value of screws:\n");
    scanf("%d", &available->screws);

    int count[5];
    count[0] = available->longBoard / LBOARD;
    count[1] = available->shortBoard / SBOARD;
    count[2] = available->smallBracket / SBRACKET;
    count[3] = available->bigBracket / BBRACKET;
    count[4] = available->screws / SCREWS;
    int result = count[0];
    for (i = 0; i < 5; i++)
    {
        if (result > count[i])
        {
            result = count[i];
        }
    }
    printf("With the materials in store (%d-long boards, %d -short boards, %d-small brackets,\n"
           "%d- big brackets, %d-screws)can be produced %d shelfs:\n ",
           available->longBoard, available->shortBoard,
           available->smallBracket, available->bigBracket, available->screws, result);
    return 0;
}