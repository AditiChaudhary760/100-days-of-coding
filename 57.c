//Find the sum of array elements.


#include <stdio.h>
void main()
{
    int n,s=0;
    printf("Enter the limit: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ", n);
    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("%d", s);
}