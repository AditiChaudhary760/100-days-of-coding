//Find the sum of all elements in a matrix.



#include <stdio.h>
void main()
{
    int r,c,s=0;
    printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf ("%d", &a[i][j]);
        }  
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("Sum = %d", s);
}