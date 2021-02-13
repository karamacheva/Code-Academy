#include <stdio.h>
#include <stdlib.h>

/*Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

#define size 100

int main(void)
{

    int number[100], age[100];
    char **name, **family;
    int choice = 1, count = 0;
    int i;
    name = (char **)malloc(sizeof(char *));
    if (NULL == name)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    family = (char **)malloc(sizeof(char *));
    if (NULL == family)
    {
        printf("Allocation memory error!\n");
        exit(2);
    }
    while (choice)
    {
        printf("Enter the number: ");
        fflush(stdin);
        scanf("%d", &number[count]);
        printf("Enter the name: ");
        name[count] = (char *)malloc(14);
        if (NULL == name[count])
        {
            printf("Allocation memory error!\n");
            exit(3);
        }
        fflush(stdin);
        gets(name[count]);
        printf("Enter the family: ");
        family[count] = (char *)malloc(14);
        if (NULL == family[count])
        {
            printf("Allocation memory error!\n");
            exit(4);
        }
        fflush(stdin);
        gets(family[count]);
        printf("Enter the age:");
        fflush(stdin);
        scanf("%d", &age[count]);
        printf("Do you want to continue? Press 1 to continue or 0 to stop\n");
        fflush(stdin);
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Your list: \n");
            for (i = 0; i <= count; i++)
            {
                printf("Number: %d\n", number[i]);
                printf("Name: %s\n", name[i]);
                printf("Family: %s\n", family[i]);
                printf("Age: %d\n", age[i]);
            }
        }
        count++;
    }
    free(name);
    free(family);
    free(name[count]);
    free(family[count]);
    return 0;
}