//Find the transpose of a matrix.


#include <stdio.h>
void main() 
{
    int i, j, r, c;
    printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);

    int a[r][c], b[c][r];

    printf("Enter the elements: \n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original Matrix =\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Transpose
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose =\n");
    for(i = 0; i < c; i++) 
    {
        for(j = 0; j < r; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
