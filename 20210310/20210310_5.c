/*Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)*/

#include <stdio.h>
#include <signal.h>
#include <Windows.h>

void handleSignal(int sign)
{
    printf("Handle signal %d\n", sign);
}

int main()
{
    signal(SIGABRT, handleSignal);
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    for (;;)
    {
        Sleep(1);
    }
    return 0;
}