//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


#include <stdio.h>
void main()
{
    int n;
    double sum = 1.0;
    printf("Enter the no. of terms: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += (double)(2*i - 1) / (2*i);
    }
    printf("Approximate sum = %.6f\n", sum);
}