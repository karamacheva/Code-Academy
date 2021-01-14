#include<stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(void){
    unsigned char z=0;
    bin(z);
    printf("%d\n",z);
    signed char a=-10;
    bin(a);
    printf("%d\n",a);
    int result=z+a;
    printf("%d\n",result);
    bin(result);
    return 0;
}