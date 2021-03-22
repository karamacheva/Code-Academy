#include <stdio.h>
#include <stdlib.h>

typedef struct coins
{
    int S, B, C, D;
} t_coins;

void initializeCoins(t_coins *);
void printCoins(t_coins *);
void printCombinations(t_coins *,FILE *);
void getinfo(t_coins *);