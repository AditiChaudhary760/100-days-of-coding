//Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>
void main()
{
    int n,p=1;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(int i=1; i<=n;i++)
    {
        if(i%2==0)
        {
            p=p*i;
        }
    }
    printf("Product= %d", p);
}