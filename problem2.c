#include <stdio.h>

int main()
{
    int a, b;
    printf("enter your value of a:\n");
    scanf("%d", &a);
    printf("enter your value of b:\n");
    scanf("%d", &b);
    printf("the sum of %d and %d is %d \n", a, b, a + b);
    printf("the product of %d and %d is %d \n", a, b, a * b);
    printf("the difference of %d and %d is %d \n", a, b, a - b);
    printf("the division of %d and %d is %d \n", a, b, a / b);

    return 0;
}