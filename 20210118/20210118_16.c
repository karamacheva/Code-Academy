#include <stdio.h>
int main()
{
    int iA = 13;
    int *pValue = NULL; /* pointer to int */
    pValue = &iA;       /* assigning address of iA to the pointer*/
    printf("Address of variable iA is: %p\n", pValue);
    printf("Value of variable iA is: %d\n", *pValue);
    return 0;
}
