//Write a program to find and display the sum of the first n natural numbers.


#include <stdio.h>
void main(){
    int n, sum=0;
    printf("Enter the limit for the sum of the natural numbers: \n");
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum= %d\n", sum);
}