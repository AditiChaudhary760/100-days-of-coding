//Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>
void main()
{
    int n,t;
    printf("Enter the limit of n: \n");
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
        t = 0;
        for(int j=2; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                t = 1;
                break;
            }
        }
        if(t == 0)
        printf("%d ", i);
    }
}
