//Perform diagonal traversal of a matrix.
/*Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9  */


#include <stdio.h>
void main()
{
    int r, c, i, j;
    printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter the elements: \n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal Traversal: \n");
    for(int d = 0; d < r + c - 1; d++)
    {
        if(d % 2 == 0)
        {
            i = (d < r) ? d : r - 1;
            j = d - i;
            while(i >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
                i--; j++;
            }
        }
        else
        {
            j = (d < c) ? d : c - 1;
            i = d - j;
            while(i < r && j >= 0)
            {
                printf("%d ", a[i][j]);
                i++; j--;
            }
        }
    }
}
