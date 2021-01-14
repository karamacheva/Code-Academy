#include<stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(void){
    char x=255;
    bin(256);
    char y=10;
    bin(y);
    int result=x+y;
    printf("%d\n",result);
    bin(result);
    return 0;
}