//Write a program to find the product of odd digits of a number.


#include <stdio.h>
void main()
{
    int a,r,p=1;
    printf("Enter  a number: \n");
    scanf("%d", &a);
    while(a>0)
    {
        r=a%10;
        if(r%2!=0)
        {
            p=p*r;
        }
        a=a/10;
    }
    if (p==1)
        printf("1 (no odd digits, assume 1)");
    else
        printf("%d", p);
}