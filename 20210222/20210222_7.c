#include <stdio.h>
#include<string.h>
/*Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/

union myUnion
{
    int value1;
    float value2;
    char value3[32];
};

int main(void)
{
    union myUnion u1 = {97};
    /*u1.value2=3.4;
    strcpy(u1.value3,"Ekaterina");*/
    printf("value1: %d, value2: %f, value3: %s\n", u1.value1, u1.value2, u1.value3);
    return 0;
}