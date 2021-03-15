#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node t_node;

typedef struct node
{
    int data;
    struct node *next;
} t_node;

t_node *start;

void init();
int addElement(int);
int dellFirst(int);
void printList();