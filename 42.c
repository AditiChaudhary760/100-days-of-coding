//Write a program to check if a number is a perfect number.


#include <stdio.h>
void main()
{
    int a,sum=0;
    printf("Enter  a number: \n");
    scanf("%d", &a);
    for(int i=1;i<(a/2)+1;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    if (a==sum)
        printf("Perfect number");
    else
        printf("Not Perfect number");
}
