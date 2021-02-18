#include <stdio.h>
#include <stdlib.h>

/*Задача 2. Добавете към горния код функции за умножение
и деление.*/

int fnPlus(int a, int b)
{
    return (a + b);
}

int fnMinus(int a, int b)
{
    return (a - b);
}

int fnMultiply(int a, int b)
{
    return (a * b);
}

int fnRemainder(int a, int b)
{
    return (a / b);
}

int main(int argc, char *argv[])
{
    int (*ptr)(int, int) = NULL;
    if (argc < 4)
    {
        printf("\nUsage: %s  arg1 +- arg3\n", argv[0]);
    }
    else if (argv[2][0] == '-')
    {
        ptr = fnMinus;
    }
    else if (argv[2][0] == '+')
    {
        ptr = fnPlus;
    }
    else if (argv[2][0] == '.')
    {
        ptr = fnMultiply;
    }
    else if (argv[2][0] == '/')
    {
        ptr = fnRemainder;
    }
    if (argv[2][0] == '/' && argv[3][0] == '0')
    {
        printf("Invalid operations\n");
    }
    else
    {
        (NULL == ptr) ? 0 : printf("Result: %d\n", (*ptr)(atoi(argv[1]), atoi(argv[3])));
    }
    return 0;
}