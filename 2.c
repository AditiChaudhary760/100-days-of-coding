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

    printf("the sum is %d\nthe difference is %d\nthe product is %d\n", a+b, a-b, a*b);
    if(b!=0)
    printf("the quotient is %d", a/b);
    else
    printf("\nDivision by 0 is not possible!!!");
    return 0;
}
