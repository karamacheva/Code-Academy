#include <stdio.h>
#include <string.h>
#define BUFSIZE 64;

/*Задача 2. Инициализиране на структура, вложени структури*/

struct tagDetail
{
    unsigned m_uAcadId;
    char m_szAcadName[BUFSIZ];
    char m_szAcadUrl[BUFSIZ];
};

struct tagCadet
{
    unsigned m_uCadetId;
    char m_CadetName[BUFSIZ];
    float m_uAverageRating;
    struct tagDetail m_detail;
};

int main(void)
{
    struct tagCadet cadet = {9, "Ekaterina Karamacheva", 5.58, {18, "Code Academy", "https://codeacademy.bg"}};
    printf("Cadet Id is: %d\n", cadet.m_uCadetId);
    printf("Name is: %s\n", cadet.m_CadetName);
    printf("Rating (2-6) is: %.2f\n", cadet.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);
    return 0;
}
