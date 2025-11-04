//Check if the elements on the diagonal of a matrix are distinct


#include <stdio.h>
void main() 
{
    int i, j, r, c,f=0;
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

        for (i = 0; i < r; i++) 
        {
            for (j = i + 1; j < r; j++) 
            {
                if (a[i][i] == a[j][j]) 
                {
                    f = 1; 
                    break;
                }
            }
            if (f == 1) 
                break;
        }

        if (f == 0)
            printf("True\n");
        else
            printf("False");
    }
    else
        printf("Not a square matrix!!!");
}
