//Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
void main()
{
    int c,s,p,l,p1,l1;
    printf("Enter cost price and the selling price: \n");
    scanf("%d %d",  &c, &s);
    if(s>c)
    {
        p=s-c;
        p1= (p*100)/c;
        printf("Profit percentage is %d%%\n ", p1);
    }
    else if(c>s)
    {
        l=c-s;
        l1= (l*100)/c;
        printf("Loss percentage is %d%%\n ", l1);
    }
    else
    printf("Neither profit nor loss\n");
}