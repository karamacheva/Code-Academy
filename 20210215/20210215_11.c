#include <stdio.h>

/*Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/

int main(void)
{
    int a = 12;
    int b = 13;
    int *aPtr = &a;
    int *bPtr = &b;
    printf("The product of a and b is: %d\n", (*aPtr * *bPtr));

    int c = 12;
    double d = 10.4;
    int *cPtr = &c;
    double *dPtr = &d;
    printf("The product of a and b is: %.2lf\n", (*cPtr * *dPtr));

    return 0;
}