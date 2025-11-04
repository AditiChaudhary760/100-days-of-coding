//Write a program to find the LCM of two numbers.


#include <stdio.h>
void main() 
{
    int a,b,l=1,c;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    c=a>b?a:b;
    while(1)
    {
        if(c%a==0 && c%b==0)
        {
            printf("%d", c);
            break;
        }
        c++;
    }
}
