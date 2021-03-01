#include <stdio.h>

/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

int sumOfTwo(int *a, int *b)
{
    return *a + *b;
}
typedef int (*t_sumOfTwo)(int *, int *);
t_sumOfTwo ptrSum = NULL;

int main(void)
{
    typedef int t_iValue1;
    typedef int t_iValue2;
    t_iValue1 a = 5;
    t_iValue2 b = 3;
    typedef t_iValue1 *t_ptr1;
    typedef t_iValue2 *t_ptr2;
    t_ptr1 ptrA = &a;
    t_ptr2 ptrB = &b;
    printf("The sum of two is: %d\n", sumOfTwo(ptrA, ptrB));
    ptrSum = &sumOfTwo;
    printf("The sum of two integers with poinrer function is : %d\n", ptrSum(ptrA, ptrB));
    return 0;
}