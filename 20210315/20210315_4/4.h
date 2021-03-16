#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef struct nodeTree t_nodeTree;
typedef struct nodeTree
{
    int data;
    struct nodeTree *left;
    struct nodeTree *right;
} t_nodeTree;

extern t_nodeTree *root;

void insert(int, t_nodeTree **);
void preorder(t_nodeTree *);
t_nodeTree *delElement(int,t_nodeTree *);