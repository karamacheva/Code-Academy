#include<stdio.h>

/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/

/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/

int main(void)
{
    typedef long long int t_value;
    printf("The size of lli variable is: %d\n",sizeof(t_value));
    typedef int t_value1;
    typedef int *ptrTValue;
}