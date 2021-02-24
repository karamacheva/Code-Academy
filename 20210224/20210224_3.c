#include <stdio.h>

/*Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)*/

void debugMessage(const char *ptrMessage)
{
#ifdef DEBUG
    printf("DEBUG: %s\n", ptrMessage);
#endif
}
int main(void)
{
    debugMessage("Hohoho");
    return 0;
}