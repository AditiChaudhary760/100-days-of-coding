//Search in a sorted array using binary search.


#include <stdio.h>
void main()
{
    int n,f,l,m,t;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf ("%d", &a[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d", &s);
    f=0;
    l=n-1;
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]<s)
        f=m+1;
        if(a[m]>s)
        l=m-1;
        if(a[m]==s)
        {
            t=1;
            break;
        }
    }
    if
    printf("Found at index %d", m);
    else
    printf("-1");
}