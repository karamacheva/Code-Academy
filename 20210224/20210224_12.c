#include <stdio.h>

/*Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/

#define GENERIC_MAX(t, x, y) (x > y ? x : y)

int main(void)
{
    char x1 = 'b', x2 = 'p';
    printf("Max = %c\n", GENERIC_MAX(char, x1, x2));
    int x3 = 4, x4 = 1;
    printf("Max = %d\n", GENERIC_MAX(int, x3, x4));
    float x5 = 2.8, x6 = 7.9;
    printf("Max = %.2f\n", GENERIC_MAX(float, x5, x6));
    return 0;
}