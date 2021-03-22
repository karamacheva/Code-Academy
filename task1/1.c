#include "1.h"


int A = 1;

void initializeCoins(t_coins *p)
{
    p->S = p->S;
    p->B *= A;
    p->C *= p->B;
    p->D *= p->C;
}

void printCoins(t_coins *p)
{
    printf("The S:%d, B:%d, C:%d, D:%d\n", p->S, p->B, p->C, p->D);
}

void printCombinations(t_coins *p,FILE *fp)
{
    int i, j, k, q;
    for (i = 0; i <= p->S; i++)
    {
        for (j = 0; j <= p->S; j++)
        {
            for (k = 0; k <= p->S; k++)
            {
                for (q = 0; q <= p->S; q++)
                {
                    if ((i * A + j * p->B + k * p->C + q * p->D) == p->S)
                    {
                        fprintf(fp,"%d %d %d %d\n", i, j, k, q);
                    }
                }
            }
        }
    }
}