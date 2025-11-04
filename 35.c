//Write a program to print all factors of a given number.


#include <stdio.h>
void main() 
{
    int a;
    printf("Enter the number : \n");
    scanf("%d", &a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    }
}