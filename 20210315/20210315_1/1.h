#include <stdio.h>
#include <stdlib.h>
typedef struct node t_node;
typedef struct node
{
    int data;
    struct node *next;
}t_node;

/*t_node  *top = NULL;*/

void display();
void push(int);
void pop();