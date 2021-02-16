#include <stdio.h>

/*Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/

int main(void)
{
    int a = 12;
    int *aPtr = &a;
    printf("%p", aPtr); /*address*/
    return 0;
}