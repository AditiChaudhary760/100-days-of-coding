//Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    if(a%2==0)
    printf("%d is even", a);
    else 
    printf("%d is odd", a);
}
