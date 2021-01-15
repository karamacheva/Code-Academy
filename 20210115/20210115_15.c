#include<stdio.h>

/*Задача 15. Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14.*/
void test();

int main(){
    test();
    test();
    test();
    return 0;
}

void test(){
   static int a=1;
   a++;
   printf("%d\n",a);
}