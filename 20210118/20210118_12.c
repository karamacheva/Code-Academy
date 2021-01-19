#include <stdio.h>
//Упражнение 12. Relational operators

int main()
{
    int nX;
    scanf("%d", &nX); /* homework, input with scanf */
    int nY;
    scanf("%d", &nY);
    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    else
    {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }
    else
    {
        printf("%d is smaller than %d\n", nX, nY);
    }
    if (nX >= nY)
    {
        printf("%d is greater or equal than %d\n", nX, nY);
    }
    else
    {
        printf("%d is smaller or equal than %d\n", nX, nY);
    }
    return 0;
} /* използвайте и останалите оператори за сравнение */