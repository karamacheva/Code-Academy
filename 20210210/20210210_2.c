#include <stdio.h>
#include <string.h>

/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/

void reverse();

int main(void)
{
    reverse();
    return 0;
}

void reverse()
{
    int i = 0;
    char c;
    char s[100];
    while ((c = getchar()) != '\n')
    {
        s[i] = c;
        i++;
    }
    int lenght = strlen(s);
    char *ptr = s + lenght - 1;
    for (int i = 0; i < lenght; i++)
    {
        putchar(*(ptr--));
    }
    return;
}