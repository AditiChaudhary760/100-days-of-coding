//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.



#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    if(a>0)
    printf("Positive");
    else if(a<0)
    printf("Negative");
    else
    printf("Zero");
}
