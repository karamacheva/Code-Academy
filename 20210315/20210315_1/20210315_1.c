/*Използвайте динамична реализация на стек за въвеждане на поредица 
от цели положителни числа и нейното извеждане върху екрана в 
обратен ред. За край на поредицата от клавиатурата се въвежда 0*/
#include "1.h"

/*t_node  *top = NULL;*/

int main()
{
    int n, ch;
    do
    {
        printf("\n\nStack Menu\n1. Push \n2. Pop\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter number ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    } while (ch != 0);
    return 0;
}
