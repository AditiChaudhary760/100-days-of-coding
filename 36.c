//Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>
void main() 
{
    int a,b,h=1,c;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    c=a<b?a:b;
    for(int i=1;i<=c;i++)
    {
        if(a%i==0 && b%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
}