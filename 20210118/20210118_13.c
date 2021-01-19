#include <stdio.h>

int main()
{
    int nA;
    scanf("%d", &nA); /* използвайте scanf */
    int nB;
    scanf("%d", &nB);
    int nX;
    scanf("%d", &nX);
    int nY;
    scanf("%d", &nY);
    if (nA > nB && nA != 0)
    {
        printf("&& Operator : Both conditions are true\n");
    }
    if (nX > nY || nY != 20)
    {
        printf("|| Operator : Only one condition is true\n");
    }
    if (!(nA > nB && nB != 0))
    {
        printf(" ! Operator : Both conditions are true\n");
    }
    else
    {
        printf("Both conditions are true.\n");
    }
    if ((nA + nX > nB) && (nA != 0 || nY != 0))
    {
        printf("&& Operator : Both conditions are true\n");
    }

    return 0;
}