#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред.*/

#define size 100

int main(void)
{

    int number[100], age[100];
    char **name, **family;
    char choice;
    char str[size];
    int flag = 1, count = 0;
    int i, j, temp;
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
    while (flag)
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
        printf("Do you want to continue? Press 'Y' to continue or 'N' to stop\n");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'N')
        {
            for (i = 0; i <= count; i++)
            {
                for (j = i + 1; j <= count; j++)
                {
                    if (strcmp(name[i], name[j]) > 0)
                    {
                        strcpy(str, name[i]);
                        strcpy(name[i], name[j]);
                        strcpy(name[j], str);

                        strcpy(str, family[i]);
                        strcpy(family[i], family[j]);
                        strcpy(family[j], str);

                        temp = number[i];
                        number[i] = number[j];
                        number[j] = temp;

                        temp = age[i];
                        age[i] = age[j];
                        age[j] = temp;
                    }
                }
            }
            printf("Your list: \n");
            for (i = 0; i <= count; i++)
            {
                printf("Number: %d\n", number[i]);
                printf("Name: %s\n", name[i]);
                printf("Family: %s\n", family[i]);
                printf("Age: %d\n", age[i]);
            }
            flag = 0;
        }
        count++;
    }
    free(name);
    free(family);
    free(name[count]);
    free(family[count]);
    return 0;
}