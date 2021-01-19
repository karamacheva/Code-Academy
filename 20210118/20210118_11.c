#include <stdio.h>
/*Упражнение 11. Increment / decrement operators*/
int main()
{
    int iCounter = 0;
    while (++iCounter < 3)
    {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++iCounter);
        printf("-- Counter: %d\n", --iCounter);
        printf("Counter ++: %d\n", iCounter++);
        printf("Counter --: %d\n", iCounter--);
    }
    return 0;
}
/* Какво става, ако се препълни броячът? */
//Излизаме от цикъла,тъй като нашето условие вече ще е false,т.е когато ++броячът е по-малък от 3,програмата не връща нищо