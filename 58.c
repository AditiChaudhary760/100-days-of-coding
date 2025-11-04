//Find the maximum and minimum element in an array.


// Find the maximum and minimum element in an array

#include <stdio.h>
void main()
{
    int n, max, min;
    printf("Enter the limit: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max = %d , Min = %d\n", max, min);
}