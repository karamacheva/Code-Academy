#include <stdio.h>

/*Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/

union myUnion
{
    unsigned short value1 : 6;
    char value2 : 6;
};

int main(void)
{
    union myUnion u1 = {1};
    printf("The value of union is: %u,%c\n", u1.value1, u1.value2);
    return 0;
}