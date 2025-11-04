// Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>
void main(){
    double p, r, t, si=1, ci=1;
    printf("Enter the value of principal, rate of interest, time: \n");
    scanf ("%lf %lf %lf", &p, &r, &t);
    si= (p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("SIMPLE INTEREST= %.2lf, COMPOUND INTEREST= %.2lf\n", si, ci);
}
