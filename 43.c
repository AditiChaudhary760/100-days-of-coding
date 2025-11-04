//Write a program to check if a number is a strong number.

#include <stdio.h>
void main()
{
    int n,r,f,s=0;
    printf("Enter a no.\n");
    scanf ("%d", &n);
    int n1=n;
    while(n!=0)
    {
        f=1;
        r=n%10;
        for (int i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(s==n1)
    printf("Strong number.");
    else 
    printf("Not Strong number.");
}