#include <stdio.h>

/*Упражнение 17* Направете генератор на случайни числа по следния
алгоритъм (xorshift):
int A = 1, акумулатор с начална стойност
При всяко вземане на число от генератора се прави следното:
(i) A ^= A << 13;
(ii) A ^= A >> 17;
(iii) A ^= A << 5;
При всяка итерация изведете числото на екрана.
(Направете вариация с акумулатор long long int)*/

void generatorRandomNumber()
{
    int A = 1;
    A ^= A << 13;
    printf("%d\n", A);
    A ^= A >> 17;
    printf("%d\n", A);
    A ^= A << 5;
    printf("%d\n", A);
}

void generatorRandomLongLongNumber()
{
    long long int A = 123456789;
    A ^= A << 13;
    printf("%lld\n", A);
    A ^= A >> 17;
    printf("%lld\n", A);
    A ^= A << 5;
    printf("%lld\n", A);
}

int main(void)
{
    generatorRandomNumber();
    printf("\n");
    generatorRandomLongLongNumber();
    return 0;
}