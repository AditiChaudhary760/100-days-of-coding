//Write a program to check if a number is prime.


#include <stdio.h>
void main()
{
    int n,t=0;
    printf("Enter the number : \n");
    scanf("%d", &n);
    for(int j=2;j<(n/2+1);j++)
    {
        if(n%j==0)
        {
            t++;
            break;
        }
    }
    if(t==0)
    printf("Prime");
    else
    printf("Not Prime");
}