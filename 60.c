//Count positive, negative, and zero elements in an array.


#include <stdio.h>
void main()
{
    int b,p=0,n=0,z=0;
    printf("Enter the size of the array: \n");
    scanf("%d", &b);
    int a[b];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<b;i++)
    {
        scanf ("%d", &a[i]);
    }
    for(int i=0;i<b;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]<0)
        n++;
        else
        z++;
    }
    printf("Positive= %d, Negative= %d, Zero=%d", p, n, z);
}