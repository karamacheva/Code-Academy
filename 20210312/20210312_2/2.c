#include "2.h"

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
void searchElement(int n)
{
    t_node *p = start;
    int i;
    for (i = 0; i < 14 - n; i++)
    {
        p = p->next;
    }
    printf("%d element is %d\n", n, p->data);
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