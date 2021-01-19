#include <stdio.h>

int main()
{
    int nA;
    scanf("%d", &nA);
    int nB = nA == 1 ? 2 : 0;
    printf("A value is: %d\n", nA);
    printf("B value is: %d\n", nB);
    //b)
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int maxValue = x > y ? x : y;
    printf("Max value is: %d\n", maxValue);
    return 0;
}