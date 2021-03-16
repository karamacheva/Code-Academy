/*● Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T) */

#include "2.h"

int main()
{
    t_nodeTree *root = NULL;
    insert(18, &root);
    insert(37, &root);
    insert(15, &root);
    insert(28, &root);
    preorder(root);
    return 0;
}