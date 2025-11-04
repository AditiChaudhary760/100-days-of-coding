//Add two matrices.


#include <stdio.h>
void main() 
{
    int i, j,r1,c1,r2,c2;
    printf("Enter the size: \n");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    printf("Enter the 1st matrix elements: \n");
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the size: \n");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    printf("Enter the 2nd matrix elements: \n");
    for(i = 0; i < r2; i++) 
    {
        for(j = 0; j < c2; j++) 
        {
            scanf("%d", & b[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
    int c [r1][c1];
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition Matrix =\n");
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
else
printf("Addition Not possible!!!!");
}
