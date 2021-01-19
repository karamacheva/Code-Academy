#include <stdio.h>

/*Задача 4:
В какъв ред ще се изпълнят операциите?
true = x&&y&x<<1;
Какво ще се принтира на екрана?
В какъв ред ще се изпълнят операциите?
true = x&&y^x<<1;
Какво ще се принтира на екрана?*/

int main(void)
{
    int x = 10;
    int y = 10;
    int true = x && y & x << 1;//отдясно наляво,заради оператор =, като<< е с най-висок приоритет след това & а накрая &&(а пък тези от ляво надчсно)
    printf("The value of variable true = %d\n", true);
    true = x && y ^ x << 1;//тук по същия начин
    printf("The value of variable true = %d", true);
    return 0;
}