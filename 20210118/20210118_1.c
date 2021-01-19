#include <stdio.h>

/*Задача 1: имаме две променливи int x = 10; и int y = 10;
създайте две променливи int true, false; На първата присвоете
резултата от сравнението на х == у, а на втората х != у принтирайте
с printf променливите true и false.*/

int main(void)
{
    int x = 10;
    int y = 10;
    int true = x == y;
    int false = x != y;
    printf("The value of variable true = %d\n", true);
    printf("The value of variable false = %d", false);
    return 0;
}