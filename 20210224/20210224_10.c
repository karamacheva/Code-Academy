#include <stdio.h>
#include <math.h>

/*Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

#define AVG(x, y) (x + y) / 2
#define AVG1(x, y)                                          \
    {                                                       \
        int count = 0;                                      \
        double sum = 0;                                     \
        while (x <= y)                                      \
        {                                                   \
            sum += x;                                       \
            count++;                                        \
            x++;                                            \
        }                                                   \
        printf("The average sum is: %.2lf\n", sum / count); \
    }

#define myPow(x, y) pow(x, y)
#define toUpper(a) (a - 32)

#define DISP(f, x) printf("Sqrt(%g) = %g\n", 3.0, sqrt(3.0))

int main(void)
{
    int x = 3, y = 5;
    int rez1 = AVG(x, y);
    printf("rez1 = %d\n", rez1);
    int x1 = 3, y1 = 8;
    AVG1(x1, y1);
    int x2 = 2, y2 = 4;
    int rez2 = myPow(x2, y2);
    printf("rez2 = %d\n", rez2);
    char c = 'c';
    printf("To upper is: %c\n", toUpper(c));
    DISP(sqrt, 3.0);
    return 0;
}