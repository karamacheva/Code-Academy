#include <stdio.h>

/*Напишете две функции:
void push(int) (добавя елемент на края на стека) и
int pop() (премахва елемент от края на стека)
за стек с дълбочина 16 (може да се използва масив от 16 елемента от
тип int).
Проверете дали функциите работят коректно във функция main, като
добавите 15 елемента и след това ги извадите от стека и ги изведете на
екрана.*/

int maxSize = 16;
int stack[16];
int top = -1;
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (top == maxSize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    return stack[top];
}

int pop()
{
    int data;
    if (!isEmpty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}
int push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Could not insert data, Stack is full.\n");
    }
}
int main()
{
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    printf("Element at top of the stack: %d\n", peek());
    printf("Stack empty: %s\n", isEmpty() ? "true" : "false");
    printf("Elements: \n");
    while (!isEmpty())
    {
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull() ? "true" : "false");
    printf("Stack empty: %s\n", isEmpty() ? "true" : "false");
    return 0;
}