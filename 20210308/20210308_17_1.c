/*Пренапишете задачи 14 и 15 от лекция 22 за Потребителски 
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
Задача 14 Напишете програма, в която се въвеждат пореден 
номер, име, фамилия, възраст на участници в маратон. 
Изискването е, за името и фамилията, да не се използват масиви 
с фиксирана дължина. След като въвеждането завърши, 
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете 
участниците подредени по азбучен ред.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 32
#define PARNUM 3

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
    Participant *participants[PARNUM];
    FILE *fp;
    fp = fopen("myfile17_1.txt", "wt+");
    if (fp == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

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
    fclose(fp);
    return 0;
}