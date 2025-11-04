//Merge two arrays.


#include <stdio.h>
void main()
{
    int n1,n2,m;
    printf("Enter the size of the 1st array: \n");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter the elements: \n");
    for(int i=0;i<n1;i++)
    {
        scanf ("%d", &a[i]);
    }
    printf("Enter the size of the 2nd array: \n");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the elements: \n");
    for(int i=0;i<n2;i++)
    {
        scanf ("%d", &b[i]);
    }
    printf("Merged Array: \n");
    int c[n1+n2];
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    int j=0;
    for(int i=n1;i<n1+n2;i++)
    {
        c[i]=b[j++];
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ", c[i]);
    }
}