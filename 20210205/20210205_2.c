#include <stdio.h>

/*Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/

unsigned long int myStrlen(char *);

int main(void)
{
    char str[] = "Hello world!";
    printf("The length of string is: %lu", myStrlen(str));
    return 0;
}

unsigned long int myStrlen(char *s)
{
    unsigned int long strlenStr = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        strlenStr++;
        i++;
    }
    return strlenStr;
}
