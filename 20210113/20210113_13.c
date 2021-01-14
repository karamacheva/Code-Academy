#include<stdio.h>

int main(void)
{
    //a='a'
    char a;
    scanf("%c",&a);
    printf("The variable of type char is %c and memory is: %d\n",a,sizeof(a));
    //b=102
    int b;
    scanf("%d",&b);
    printf("The variable of type int is %d and memory is: %d\n",b,sizeof(b));
    //c=50000
    long c;
    scanf("%ld",&c);
    printf("The variable of type long is %ld and memory is: %d\n",c,sizeof(c));
    //d=6
    float d;
    scanf("%f",&d);
    printf("The variable of type float is %f and memory is: %d\n",d,sizeof(d));
    //e=-48.907
    double e;
    scanf("%lf",&a);
    printf("The variable of type double is %lf and memory is: %d\n",e,sizeof(e));

    return 0;
}