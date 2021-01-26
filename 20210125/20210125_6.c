#include <stdio.h>

/*Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/

int main(void)
{
    char c;
    int countSymbols = 0;
    int countDigits = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            countSymbols++;
        }
        else if (c >= '0' && c <= '9')
        {
            countDigits++;
            continue;
        }
    }
    printf("\nThe count of symbols is: %d", countSymbols);
    printf("\nThe count of digits is: %d", countDigits);
    return 0;
}