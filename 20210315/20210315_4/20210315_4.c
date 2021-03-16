/*Задача 4. Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на*/
#include "4.h"

t_nodeTree *root = NULL;
int main()
{
    int arr[11] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};
    int i;
    for (i = 0; i < 11; i++)
    {
        insert(arr[i], &root);
    }
    preorder(root);
    printf("\n");

    root = delElement(1, root);
    preorder(root);
    printf("\n");

    root = delElement(7, root);
    preorder(root);
    printf("\n");

    root = delElement(12, root);
    preorder(root);
    printf("\n");

    root = delElement(14, root);
    preorder(root);
    return 0;
}