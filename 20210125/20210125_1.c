#include <stdio.h>

int countSymbols(int s)
{
    int countSymbols=0;
    while(s!=EOF)
    {
        s=getchar();
        countSymbols++;
    }
    return countSymbols;
}

int main(void)
{
    int s;
    getchar();
    printf("The count of symbol is: %d",countSymbols(s));
    return 0;
}