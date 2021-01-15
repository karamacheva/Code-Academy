#include<stdio.h>

/*Задача 14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива.*/

int a=1;
void test();

int main(){
    test();
    test();
    test();
    printf("Global variable = %d \n", a);
}

void test(){
    a++;
}

