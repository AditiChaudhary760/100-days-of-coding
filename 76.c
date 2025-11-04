//Check if a matrix is symmetric.


#include <stdio.h>
void main() 
{
    int i, j,r,c,f=1;
    printf("Enter the size: \n");
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
        int b[r][c];
        for(i = 0; i < r; i++) 
        {
            for(j = 0; j < c; j++)
            {
                b[j][i] = a[i][j];
            }
        }
        for(i = 0; i < r; i++) 
        {
            for(j = 0; j < c; j++)
            {
                if(b[i][j]!= a[i][j])
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==1)
        printf("True");
        else
        printf("False");
    }
    else
    printf("Not a Square Matrix!!!!");
}
