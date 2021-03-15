#include "2.h"

extern t_node *start;

int main(void)
{
    int i;
    init();
    for (i = 1; i < 15; ++i)
    {
        add(i);
    }
    printf("\n");
    searchElement(5);
    printList();
    return 0;
}