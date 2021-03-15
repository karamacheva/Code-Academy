#include "1.h"

int main()
{
    init();

    addElement(7);
    addElement(1);
    addElement(3);
    addElement(2);

    puts("Created Linked List: ");
    printList();
    puts("\nLinked List after Deletion of 1: ");
    dellFirst(3);
    printList();

    return 0;
}