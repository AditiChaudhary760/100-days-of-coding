//Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter 3 no.'s: \n");
    scanf("%d %d %d",&a, &b, &c);
    if(c>=b && c>=a)
    printf("Largest number is %d", c);
    else if(b>=a && b>=c)
    printf("Largest number is %d", b);
    else
    printf("Largest number is %d", a);
}