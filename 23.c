//Write a program to calculate library fine based on late days as follows:
/*First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/


#include <stdio.h>
void main()
{
    int d, f;
    printf("Enter the no. of days late: \n");
    scanf("%d", &d);
    if(d<=5)
    {
        f=d*2;
        printf("The fine is: ₹%d", f);
    }
    else if (d>5 && d<=10)
    {
        f=10+(d-5)*4;
        printf("The fine is: ₹%d", f);
    }
    else if (d>10 && d<=30)
    {
        f=10+(d-10)*6;
        printf("The fine is: ₹%d", f);
    }
    else 
    {
        printf("Membership cancelled.");
    }
}