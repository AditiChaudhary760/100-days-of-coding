//Write a program to calculate the factorial of a number.


#include <stdio.h>
void main()
{
    int n, f=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial= %d", f);
}
