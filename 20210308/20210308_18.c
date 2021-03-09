/*Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин.*/

#include <stdio.h>
#include <stdlib.h>

static const char *FORMAT_PERSON_IN = "(%[^,], %d, %c)\n";
static const char *FORMAT_PERSON_OUT = "(%s, %d, %c)\n";
typedef struct Person
{
    char name[20];
    int age;
    char gender;
} t_person;

int main(void)
{
    t_person p1 = {.name = "Ekaterina", .age = 22, .gender = 'F'};
    t_person p2;
    FILE *fp;
    fp = fopen("person.xml", "w+");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fprintf(fp, FORMAT_PERSON_OUT, p1.name, p1.age, p1.gender);
    fseek(fp, 0, SEEK_SET);
    fscanf(fp, FORMAT_PERSON_IN, p2.name, &p2.age, &p2.gender);
    printf(FORMAT_PERSON_OUT, p2.name, p2.age, p2.gender);
    fclose(fp);
    return 0;
}