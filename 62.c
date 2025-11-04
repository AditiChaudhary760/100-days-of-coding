//Reverse an array without taking extra space.


#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf ("%d", &a[i]);
    }
    printf("Reversed Array: \n");
    for(int i=(n-1);i>=0;i--)
    {
        printf("%d ", a[i]);
    }
}