//Write a program to input a year and check whether it is a leap year or not using conditional statements.


#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
                printf("Leap year");
            else
                printf("Not a leap year");        
        }
        else
        printf("Leap year");
    }
}
