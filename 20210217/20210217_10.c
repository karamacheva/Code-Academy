#include <stdio.h>
#include <math.h>

/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/

int isPrime(int n)
{
    int i;
    int lim = sqrt(n);
    if (n <= 1)
    {
        return 0;
    }
    for (i = 2; i <= lim; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int *primeSerries()
{
    int number;
    int *ptr = &number;
    for (*ptr = 1; *ptr <= 1000; (*ptr)++)
    {
        if (isPrime(*ptr))
        {
            printf("%d ", *(ptr));
        }
    }
    return ptr;
}

int main(void)
{
    int *ptrFunc;
    ptrFunc = primeSerries();
    return 0;
}