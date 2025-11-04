// Read and print elements of a one-dimensional array.


#include <stdio.h>
void main() 
{
    int n, i;
    printf("Size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}   
