//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


#include <stdio.h>
void main()
{
    int n;
    double sum = 0.0;
    printf("Enter the no. of terms: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += (double)(2 * i) / (4 * i - 1);
    }
    printf("Approximate sum = %.6f\n", sum);
}
