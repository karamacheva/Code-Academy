#include <stdio.h>

/*Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).*/
#pragma pack(1)
struct myStruct
{
    short int ivalue : 3;
    short int ivalue2 : 3;
    char cvalue : 6;
    char cvalue2 : 6
};

int main(void)
{
    struct myStruct s1 = {.ivalue = 7, .cvalue = 'c'};
    printf("The elements of struct is: %d,%c\n", s1.ivalue, s1.cvalue);
    printf("The size of struct is: %d\n", sizeof(s1));
    return 0;
}