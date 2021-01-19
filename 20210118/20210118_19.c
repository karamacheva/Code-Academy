#include <stdio.h>

/*Упражнение 19*. Докажете опитно теоремите на Де Морган:
! ( А && B ) = ! A || ! B
! ( A || B ) = ! A && ! B
Под опитно доказване се разбира да се направят всичките четири
комбинации на A и B и за тях да се провери горното.*/

//Възможните комбинации са 0 0, 0 1, 1 0, 1 1

int main(void)
{
    int A = 0;
    int B = 0;
    (!(A && B) == !A || !B) ? printf("Theorema 1 is true for A=0 B=0\n") : printf("Theorema 1 is false for A=0 B=0\n");
    (!(A && B) == !A || !B) ? printf("Theorema 2 is true for A=0 B=0\n") : printf("Theorema 2 is false for A=0 B=0\n");

    A = 0;
    B = 1;
    (!(A && B) == !A || !B) ? printf("Theorema 1 is true for A=0 B=1\n") : printf("Theorema 1 is false for A=0 B=1\n");
    (!(A && B) == !A || !B) ? printf("Theorema 2 is true for A=0 B=1\n") : printf("Theorema 2 is false for A=0 B=1\n");

    A = 1;
    B = 0;
    (!(A && B) == !A || !B) ? printf("Theorema 1 is true for A=1 B=0\n") : printf("Theorema 1 is false for A=1 B=0\n");
    (!(A && B) == !A || !B) ? printf("Theorema 2 is true for A=1 B=0\n") : printf("Theorema 2 is false for A=1 B=0\n");

    A = 1;
    B = 1;
    (!(A && B) == !A || !B) ? printf("Theorema 1 is true for A=1 B=1\n") : printf("Theorema 1 is false for A=1 B=1\n");
    (!(A && B) == !A || !B) ? printf("Theorema 2 is true for A=1 B=1\n") : printf("Theorema 2 is false for A=1 B=1\n");

    return 0;
}