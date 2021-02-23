#include <stdio.h>

/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
struct name array[10]; /* define array 
array[i].member = value; /* set member value 
struct name array[10]= { {1,3,2019}, {3,4,2020}} /* define and init array member
struct name array[10] = { [1] = {3,4,2020} }; /* define and init array members 
struct name array[10] = {[1].month = 4,[1].year = 2020}; /* define and init array members */

struct date
{
    int day, month, year;
};

int main(void)
{
    int i;
    struct date array[10] = {{1, 3, 2019}, {3, 4, 2020}, [2] = {18, 10, 1998}, [4].day = 2, [4].month = 12, [4].year = 2013, {20, 10, 2015}, {13, 12, 2018}};
    array[3].day = 23;
    array[3].month = 2;
    array[3].year = 2021;
    array[7].day = 15;
    array[7].month = 3;
    array[7].year = 1975;
    array[8].day = 16;
    array[8].month = 4;
    array[8].year = 1972;
    array[9].day = 3;
    array[9].month = 4;
    array[9].year = 1986;
    for (i = 0; i < 10; i++)
    {
        printf("%d:%d:%d\n", array[i].day, array[i].month, array[i].year);
    }
    return 0;
}