//Delete an element from a given position from an array.


#include <stdio.h>
void main()
{
    int n,p;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf ("%d", &a[i]);
    }
    printf("Position of the element: ");
    scanf("%d", &p);
    for(int j=p+1;j<n;j++)
        a[j-1]=a[j];
    n--;
    printf("Array after deletion: \n");
    for(int i=0;i<n;i++)
    printf("%d ", a[i]);
}