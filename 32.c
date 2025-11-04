//Write a program to check if a number is a palindrome.


#include <stdio.h>
void main()
{
    int n, r,s=0,n1;
    printf("Enter a number: \n");
    scanf ("%d", &n);
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        s=s*10+r;
        n1=n1/10;
    }
    if(s==n)
    printf("Palindrome");
    else        
    printf("Not Palindrome");
}