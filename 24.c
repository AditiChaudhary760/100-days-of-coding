/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/


#include <stdio.h>
void main()
{
    int u,b;
    printf("Enter the no. of units consumed: \n");
    scanf("%d", &u);
    if(u<=100)
    {
        b=u*5;
        printf("The bill is: ₹%d", b);
    }
    else if(u>100 && u<=200)
    {
        b=500+(u-100)*7;
        printf("The bill is: ₹%d", b);
    }
    else if(u>200 && u<=300)
    {
        b=1200+(u-200)*10;
        printf("The bill is: ₹%d", b);
    }
    else
    {
        b=2200+(u-300)*12;
        printf("The bill is: ₹%d", b);
    }
}