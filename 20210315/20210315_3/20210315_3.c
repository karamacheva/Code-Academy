/*Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/

#include "3.h"
#define MAX_SIZE 13

t_nodeTree *root1 = NULL;
t_nodeTree *root2 = NULL;
t_nodeTree *root3 = NULL;
t_nodeTree *root4 = NULL;
t_nodeTree *root5 = NULL;

int main(void)
{

    int arr1[MAX_SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    int arr2[MAX_SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    int arr3[MAX_SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    int arr4[MAX_SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    int arr5[MAX_SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    int i;
    for (i = 0; i < MAX_SIZE; i++)
    {
        insert(arr1[i], &root1);
        insert(arr2[i], &root2);
        insert(arr3[i], &root3);
        insert(arr4[i], &root4);
        insert(arr5[i], &root5);
    }
    preorder(root1);
    printf("\n");
    preorder(root2);
    printf("\n");
    preorder(root3);
    printf("\n");
    preorder(root4);
    printf("\n");
    preorder(root5);
    printf("\n");
    return 0;
}