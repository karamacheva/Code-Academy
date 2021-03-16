#include "5.h"

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

t_nodeTree *searchRec(t_nodeTree *T, int n)
{
    if (T != NULL)
        if (T->data < n)
            T = searchRec(T->right, n);
        else if (T->data > n)
            T = searchRec(T->left, n);
    return T;
}