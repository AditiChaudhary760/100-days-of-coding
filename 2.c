//Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main()
{
    int a;
    printf("enter a :\n");
    scanf("%d", &a);
    int b;
    printf("enter b :\n");
    scanf("%d", &b);

    printf("the sum is %d\n the difference is %d\n the product is %d\n the remainder is %d\n", a+b, a-b, a*b, a%b);
    return 0;
}