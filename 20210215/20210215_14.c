#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/

void isGoodPass();

int main()
{
    srand((unsigned)time(0));
    char answer = 'N';
    while (answer != 'Y')
    {
        isGoodPass();
        printf("\nDo you like this password?\nPress Y for yes\nPress N for new password\n");
        scanf("\n%c", &answer);
    }
    return 0;
}

void isGoodPass()
{
    char *ptr = malloc(6 * sizeof(char));
    int i, n;
    for (i = 0; i < 6; i++, ptr++)
    {
        if ((n = rand() % 2) == 1)
            *ptr = (rand() % 26) + 65;
        else
            *ptr = (rand() % 26) + 97;
    }
    printf("Password: ");
    for (i = 0; i < 7; i++, ptr--)
    {
        printf("%c", *ptr);
    }
    return;
}