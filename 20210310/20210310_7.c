/*Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/

#include <stdio.h>
#include <signal.h>
#include <Windows.h>

void handleSignal(int sign)
{
    printf("Handle signal\n", sign);
}

int main(void)
{
    for (;;)
    {
        signal(SIGINT, handleSignal);
        signal(EOF, handleSignal);
        Sleep(1);
    }
    return 0;
}