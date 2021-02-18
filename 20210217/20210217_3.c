#include <stdio.h>

/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/

int fun1(int a, int b)
{
    return a + b;
}

int fun2(int a, int b)
{
    return a - b;
}

int fun3(int a, int b)
{
    return a * b;
}

int main(void)
{
    int (*func_ptr[3])(int, int) = {fun1, fun2, fun3};
    int choise;
    printf("Your choise for func is: "); /*0 fun1,1fun2,2 fun3*/
    scanf("%d", &choise);
    int x, y;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf("%d", &y);
    printf("The result is: %d\n", func_ptr[choise](x, y));
    return 0;
}