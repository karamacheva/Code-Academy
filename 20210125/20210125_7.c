#include <stdio.h>

/*Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.*/

int main(void)
{
    char c;
    int countSymbols = 0;
    char str[1024];
    while ((c = getchar()) != EOF)
    {
        str[countSymbols] = c;
        countSymbols++;
        if (c == '\n')
        {
            if (countSymbols > 80)
            {
                printf("%s", str);
            }
            str[0] = '\0';
            countSymbols = 0;
        }
        return 0;
    }