/*Напишете стандартната програма за Linux cat , която приема като 
аргументи от командния ред имена на файлове и изкарва съдържанието 
им на стандартния изход. Ако на програмата не са подадени никакви 
аргументи, то тя да изкара съдържанието подадено от стандартния вход 
на стандартния изход.*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> 

int main(int argc, char *argv[])
{
    int fd, i, ch;

    for (i = 1; i < argc; i++)
    {
        fd = open(argv[1], O_RDONLY);
        if (fd < 0)
        {
            perror("open");
            return -1;
        }
        while (read(fd, &ch, 1))
        {                                
            write(1, &ch, 1); 
        }
        close(fd);
    }
    return 0;
}