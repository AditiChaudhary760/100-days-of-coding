//Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>
void main() 
{
    int i, j,r, c;
    printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int row[r];

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

    for(i = 0; i < r; i++) 
    {
        row[i] = 0;
        for(j = 0; j < c; j++) 
        {
            row[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(i = 0; i < r; i++)
        printf("%d ", row[i]);
}
    
