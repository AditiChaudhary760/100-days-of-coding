//Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>
void main() 
{
    int n,n1,c=0,r;
    double s=0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    n1=n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    n=n1;
    while(n!=0)
    {
        r=n%10;
        s=s+ pow(r,c);
        n=n/10;
    }   
    if(s==n1)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
