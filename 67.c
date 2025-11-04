//Insert an element in an array at a given position.


#include <stdio.h>
void main()
{
    int n,p,in;
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
    printf("Element to be inserted: \n");
    scanf("%d", &in);
    for(int j=n-1;j>=p;j--)
    a[j+1]=a[j];
    a[p]=in;
    for(int i=0;i<n+1;i++)
    printf("%d ", a[i]);
}