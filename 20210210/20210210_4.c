#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/

void isGoodPass();

int main()
{
    srand((unsigned)time(0));
    char answer = 'N';
    while (answer != 'Y')
    {
        isGoodPass();
        printf("Do you like this password?\nPress Y for yes\nPress N for new password\n");
        scanf("\n%c", &answer);
    }
    return 0;
}

void isGoodPass()
{
    char pass[7];
    int i, n;
    for (i = 0; i < 6; i++)
    {
        if ((n = rand() % 2) == 1)
            pass[i] = (rand() % 26) + 65;
        else
            pass[i] = (rand() % 26) + 97;
    }
    printf("Password: %s\n", pass);
    return;
}