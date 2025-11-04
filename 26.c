// Write a program to print numbers from 1 to n.


#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf ("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ", i);
    }
}