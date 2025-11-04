/*Write a program to print the following pattern:
5
45
345
2345
12345*/


#include <stdio.h>
void main()
{
    printf("Pattern:- \n");
    int s=5;
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j<=s;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}