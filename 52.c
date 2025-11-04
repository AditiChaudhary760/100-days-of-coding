/*  Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*   */


#include <stdio.h>
void main()
{
    printf("Pattern:- \n");
    for(int i=1;i<=5;i=i+2)
    {
       for(int j=1;j<=i;j++)
       {
            printf("*\n");
       }
       printf(" \n");
    }
    for(int i=3;i>=1;i=i-2)
    {
        for(int j=1;j<=i;j++)
        {
           printf("* \n");
        }
        printf(" \n");
    }
}