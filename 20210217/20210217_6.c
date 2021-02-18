#include <stdio.h>

/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/

int countCymbolA(char *);

int main(void)
{
    char str[] = "This is a string to test my idea for search in a char and ....";
    printf("The count of cymbol a is: %d\n", countCymbolA(str));
    return 0;
}

int countCymbolA(char *str)
{
    int count = 0;
    while (*str)
    {
        if (*str == 'a')
        {
            count++;
        }
        *str++;
    }
    return count;
}
