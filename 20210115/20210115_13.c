#include<stdio.h>

/*Задача 13. Ако имаме символен низ char str[] = “HELLO”, заменете
всичките символи с главна буква със съответните символи с малка
буква.*/

int main(void){
    char str[]="HELLO";
    str[0]='h';
    str[1]='e';
    str[2]='l';
    str[3]='l';
    str[4]='o';
    printf("String is: %s",str);
    return 0;
}