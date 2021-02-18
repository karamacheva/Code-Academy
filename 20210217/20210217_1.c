#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред: а.оut
20 + 3*/

int fnPlus(int a, int b)
{
    return (a + b);
}

int fnMinus(int a, int b)
{
    return (a - b);
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
    (NULL == ptr) ? 0 : printf("Result: %d\n", (*ptr)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}