#include <stdio.h>

/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/

int main(void)
{
    typedef int t_arr[5];
    t_arr a = {1, 2, 3, 4, 5};
    int i;
    printf("The ellements of array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}