#include "3.h"

void insert(int x, t_nodeTree **T)
{
    t_nodeTree *temp = NULL;
    if (!(*T))
    {
        temp = (t_nodeTree *)malloc(sizeof(t_nodeTree));
        temp->left = temp->right = NULL;
        temp->data = x;
        *T = temp;
        return;
    }
    if (x < (*T)->data)
    {
        insert(x, &(*T)->left);
    }
    else if (x > (*T)->data)
    {
        insert(x, &(*T)->right);
    }
}

void preorder(t_nodeTree *n)
{
    if (n)
    {
        printf("%d   ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}