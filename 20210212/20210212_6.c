#include <stdio.h>
#include <stdlib.h>

/*Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/

int main(void)
{
    int c;
    int count = 0;
    int size = 2;
    char *buffer;
    buffer = malloc(sizeof(char) * size);
    if (NULL == buffer)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    while ((c = getchar()) != EOF)
    {
        if (count == size - 1)
        {
            size *= 2;
            buffer = realloc(buffer, size);
            if (NULL == buffer)
            {
                printf("Reallocation memory error!\n");
                exit(2);
            }
        }
        buffer[count++] = c;
    }
    buffer[count] = '\0';
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}