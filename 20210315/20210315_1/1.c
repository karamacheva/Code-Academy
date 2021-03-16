#include "1.h"

t_node  *top = NULL;

void push(int item)
{
    t_node *nptr = malloc(sizeof(t_node));
    nptr->data = item;
    nptr->next = top;
    top = nptr;
}

void display()
{
    t_node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("\n\nStack is empty ");
    }
    else
    {
        t_node *temp;
        temp = top;
        top = top->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}
