#include <stdio.h>
#include <stdlib.h>

/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.*/
#define BUF 32
#define PARNUM 5

typedef struct Participant
{
    int id;
    char *name;
    char *lname;
    int age;
} Participant;

void getinfo(struct Participant *p)
{
    char temp[BUF];
    int id, age;

    printf("Please enter participant ID:\n");
    scanf("%d", &id);

    p->id = id;

    printf("Please enter participant name:\n");
    scanf("%s", &temp);

    p->name = (char *)malloc(strlen(temp) + 1);
    strcpy(p->name, temp);

    printf("Please enter participant last name:\n");
    scanf("%s", &temp);

    p->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(p->lname, temp);

    printf("Please enter age:\n");
    scanf("%d", &age);

    p->age = age;
}

int main(void)
{
    int i;
    struct Participant *participants[PARNUM];

    for (i = 0; i < PARNUM; i++) /* allocate memory for each participant in participants array */
    {
        participants[i] = (Participant *)malloc(sizeof(Participant));
    }

    for (i = 0; i < PARNUM; i++) /* get names of participants */
    {
        getinfo(participants[i]);
    }

    printf("Participants: \n");
    for (i = 0; i < PARNUM; i++)
    {
        printf("%d, %s, %s %d\n", participants[i]->id, participants[i]->name, participants[i]->lname, participants[i]->age);
    }

    for (i = 0; i < PARNUM; i++)
    { /* free the memory */
        free(participants[i]);
    }

    return 0;
}