//Write a program to reverse a given number.


#include <stdio.h>
void main()
{
    int n,r,s=0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("Reverse= %d", s);
}