//Insert an element in a sorted array at the appropriate position.
/*Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6 */

#include <stdio.h>
void main() 
{
    int n, in, p = 0;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted: \n");
    scanf("%d", &in);
    p = n;  
    for (int i = 0; i < n; i++) 
    {
        if (a[i] > in) 
        {
            p = i;
            break;
        }
    }
    for (int j = n; j > p; j--) 
    {
        a[j] = a[j-1];
    }
    a[p] = in;
    printf("Array after insertion: \n");
    for (int i = 0; i <= n; i++) 
    {
        printf("%d ", a[i]);
    }
}
