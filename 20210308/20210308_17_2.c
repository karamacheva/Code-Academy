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
    int id;
    int age;

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
    int i, j;
    struct Participant *participants[PARNUM];
    FILE *fp;
    fp = fopen("myfile17_1.txt", "wt+");
    if (fp == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    char *p = malloc((BUF + 1) * sizeof(char));
    int temp;

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
    {
        for (j = i + 1; j < PARNUM; j++)
        {
            if (strcmp(participants[i]->name, participants[j]->name) > 0)
            {
                strcpy(p, participants[i]->name);
                strcpy(participants[i]->name, participants[j]->name);
                strcpy(participants[j]->name, p);

                strcpy(p, participants[i]->lname);
                strcpy(participants[i]->lname, participants[j]->lname);
                strcpy(participants[j]->lname, p);

                temp = participants[i]->id;
                participants[i]->id = participants[j]->id;
                participants[j]->id = temp;

                temp = participants[i]->age;
                participants[i]->age = participants[j]->age;
                participants[j]->age = temp;
            }
        }
    }

    printf("\n");
    printf("Participant after compare: \n");
    for (i = 0; i < PARNUM; i++)
    {
        printf("%d, %s, %s %d\n", participants[i]->id, participants[i]->name, participants[i]->lname, participants[i]->age);
    }

    for (i = 0; i < PARNUM; i++)
    { /* free the memory */
        free(participants[i]);
    }

    free(p);
    fcose(fp);
    return 0;
}