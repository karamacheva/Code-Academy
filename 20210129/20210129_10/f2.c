#include <stdio.h>
#include "f2.h"

unsigned int lcm(unsigned int n1, unsigned int n2)
{
    unsigned int max;
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            break;
        }
        ++max;
    }
    return max;
}

float absValue(float number)
{
    if (number < 0)
    {
        return -number;
    }
    return number;
}

float sqtrOfNumber(int number)
{
    float x1 = (number * 1.0) / 2;
    float x2 = (x1 + (number / x1)) / 2;
    while (absValue(x1 - x2) >= 0.0000001)
    {
        x1 = x2;
        x2 = (x1 + (number / x1)) / 2;
    }
    return x2;
}