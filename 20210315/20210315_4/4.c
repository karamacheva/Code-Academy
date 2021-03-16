#include "4.h"

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

t_nodeTree *delElement(int x,t_nodeTree *T){ 

    if (T == NULL)
        return T;
    if (x < T->data)
        T->left = delElement(x,T->left);

    else if (x > T->data)
    {
        T->right = delElement(x,T->right);
    }
    else
    {
        if (T->left == NULL)
        {
            t_nodeTree *temp = T->right;
            free(T);
            return temp;
        }
        else if (T->right == NULL)
        {
           t_nodeTree *temp = T->left;
            free(T);
            return temp;
        }
    }
    return T;
}

void preorder(t_nodeTree *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}