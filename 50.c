/*  Write a program to print the following pattern:
*****
****
***
**
*   */


#include <stdio.h>
void main()
{
    printf("Pattern:- \n");
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
