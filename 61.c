//Search for an element in an array using linear search.


#include <stdio.h>
void main()
{
    int n,s,t=0;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf ("%d", &a[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d", &s);
    for(int i=0;i<n;i++)
    {
        if(s==a[i])
        {
            printf("Found at index %d", i);
            t=1;
            break;
        }
    }
    if(t==0)
    printf("-1");
}
