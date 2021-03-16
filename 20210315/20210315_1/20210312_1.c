/*Задача 1. Реализация на списък. Напишете програма, която добавя и 
изтрива елемент от списък по позиция в списъка. Използвайте следния 
елемент на динамичния списък:
typedef struct t_node { 
int m_nValue; 
t_node* m_pNext; 
} t_node; */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;
} t_node;

t_node *start;

void init()
{
    start = NULL;
}
int addElement(int data)
{
    t_node *p = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
        return -1;
    start->data = data;
    start->next = p;
    return 0;
}

int dellFirst(int n)
{
    t_node *temp, *prev;
    temp = start;
    while (temp != NULL)
    {
        if (temp->data == n)
        {
            if (temp == start)
            {
                start = temp->next;
                free(temp);
                return 1;
            }
            else
            {
                prev->next = temp->next;
                free(temp);
                return 1;
            }
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    return 0;
}

void printList()
{
    t_node *p = start;
    while (start != NULL)
    {
        printf(" %d ", start->data);
        start = start->next;
    }
}

int main()
{
    init();

    addElement(7);
    addElement(1);
    addElement(3);
    addElement(2);

    puts("Created Linked List: ");
    printList();
    puts("\nLinked List after Deletion of 1: ");
    dellFirst(3);
    printList();

    return 0;
}