#include <stdio.h>

/*Задача 3: имаме две променливи int x = 10; и int y = 10;
създайте две променливи int true, false; На true присвоете
резултата от инкрементирането на ++х плюс оператор логическо
ИЛИ поставен между х и у . Принтирайте резултата*/

int main(void)
{
    int x = 10;
    int y = 10;
    int true = ++x + x || y;
    int false;
    printf("The value of variable true = %d", true);
    return 0;
}