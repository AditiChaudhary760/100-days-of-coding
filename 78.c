//Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>
void main() 
{
    int i, j, s=0, r, c;
    printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);

    int a[r][c];
    if(r==c)
    {
        printf("Enter the elements: \n");
        for(i = 0; i < r; i++) 
        {
            for(j = 0; j < c; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < r; i++) 
        {
            s=s+a[i][i];
        }

        printf("Sum of main diagonal = %d", s);
    }
    else 
    printf("Not a square Matrix!!!!!!!!!");
}
