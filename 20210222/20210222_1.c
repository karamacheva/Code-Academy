#include <stdio.h>
/*Задача 1. Дефиниране и инициализация на обединение*/
#pragma pack(1)
union tagMyData
{
    int m_nValue;
    float m_fValue;
    char m_szText[25];
}/*__attribute((packed))*/;

struct pesho{
    char name[35];
};

int main()
{
    union tagMyData data = {65};
    printf("Memory size : sizeof(data) : %d\n", sizeof(data));
    printf("nValue: %d, fValue: %f, Text: %s\n", data.m_nValue, data.m_fValue, data.m_szText);
    struct pesho p={0};
    printf("Size of structure is: %d\n",sizeof(p));
    return 0;
}