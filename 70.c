//Rotate an array to the right by k positions.


#include <stdio.h>

void main()
{
    int n, k;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter elements: \n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter no. of rotations: \n");
    scanf("%d", &k);
    k=k%n;
    int j=0;
    for(int i = n-k; i < n; i++)
    {
        b[j] = a[i];
        j++;
    }
    for(int i = 0; i < n-k; i++)
    {
        b[j] = a[i];
        j++;
    }
    printf("Rotated Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
}
