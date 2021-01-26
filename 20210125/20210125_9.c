#include <stdio.h>

/*Задача 9. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки.*/

int main(void)
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 65 && c <= 90))
        {
            putchar(c + 32);
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}