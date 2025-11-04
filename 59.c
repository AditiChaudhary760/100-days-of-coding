//Count even and odd numbers in an array.


#include <stdio.h>
void main()
{
    int n,e=0,o=0;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf ("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("Even= %d, Odd= %d", e, o);
}
