#include <stdio.h>

int main(void)
{
    char arr1[5] = {'g', 'o', 'o', 'd'};
    int arr2[2] = {1, 2};
    double arr3[3] = {1.2, 2.3, 3.4};
    printf("The last element of first arr is %c\n", arr1[3]);
    printf("The last element of first arr is %d\n", arr2[1]);
    printf("The last element of first arr is %lf\n", arr3[2]);

    return 0;
}