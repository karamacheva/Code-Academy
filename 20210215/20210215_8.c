#include <stdio.h>

/*Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/

int main(void)
{
    int a = 12;
    int *aPtr = &a;
    printf("%p", aPtr); /*address*/
    return 0;
}