//Write a program to print the sum of the first n odd numbers.


#include <stdio.h>
void main()
{
    int n, sum=0;
    printf("Enter value of n: \n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(2*i)-1;
    }
    printf("Sum = %d", sum);
}