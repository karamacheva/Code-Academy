#include <stdio.h>

int myStrlen(char s[]){
int i = 0;
while(s[i] != '\0'){
    i++;
}
    return i;
}

int main(void){
    char str[]="Hi";
    printf("Length of str is: %d",myStrlen(str));
    return 0;
}