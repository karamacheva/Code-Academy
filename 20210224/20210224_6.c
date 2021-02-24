#include <stdio.h>
/*Задача 4. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/

#define MY_PRINT(...) printf("Date :" __VA_ARGS__)

int main(void)
{
    MY_PRINT("My birthday date is: %d:%d:%d\n",18, 10, 1998);
    return 0;
}