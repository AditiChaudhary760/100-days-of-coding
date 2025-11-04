//Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    printf("Enter the roots of the quadratic equation: \n");
    scanf ("%d %d %d", &a, &b, &c);
    int d= (b*b)-(4*a*c);
    if(d>0)
    {
        int r1=(-b+sqrt(d))/2*a;
        int r2=(-b-sqrt(d))/2*a;
        printf("Roots are real and different: %d, %d", r1, r2);
    }
    else if (d==0)
    {
        int r1=(-b+sqrt(d))/2*a;
        printf("Roots are real and same: %d", r1);
    }
    else
    printf("Roots are complex");
}
