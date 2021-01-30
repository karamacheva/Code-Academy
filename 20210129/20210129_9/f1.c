#include <stdio.h>
#include "f1.h"

int func3(int a, int b)
{
    return a + b;
}
int func2(int a, int b)
{
    return 3 * (2 + func3(a, b)) + 4;
}
int func1(int a, int b)
{
    return 10 + func2(a, b) * 2;
}
