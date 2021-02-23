#include <stdio.h>
#include <string.h>

/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
struct name
{
int variable1;
char variable2[128];
float variable3;
} ;
struct name newvariable; дефинираме нова променлива
newvariable.varable1 = 50;
strcpy (newvariable.varable2 , “chocolate”);
newvariable.varable3 = 2.50;*/

struct product
{
    int quantity;
    float price;
    char nameOfProduct[64];
};

int main(void)
{
    struct product p;
    p.quantity = 50;
    p.price = 2.50;
    strcpy(p.nameOfProduct, "chocolate");
    printf("The name of product is %s,his quantity is %d and his price is %.2f\n", p.nameOfProduct, p.quantity, p.price);
    return 0;
}