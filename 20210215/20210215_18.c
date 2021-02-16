#include <stdio.h>

/*Задача 18. Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.*/

void copy(char *from, char *to)
{
    while (*from)
    {
        *to-- = *from--;
        /**from--;*/
        /**to--;*/
    }
    *to = '\0';
}

int main(void)
{
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[64];
    char string4[32];
    copy(string1, string4);
    copy(string3, string2);
    printf("The new string is: %s\n", string4);
    printf("The new string is: %s\n", string2);
    return 0;
}