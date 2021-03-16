#include "1.h"

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