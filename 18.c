// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:


#include <stdio.h>
void main()
{
    float p;
    printf("Enter the percentage: \n");
    scanf("%f", &p);
    if(p>=90 && p<=100)
    printf("Grade A");
    else if(p>=80 && p<=89)
    printf("Grade B");
    else if(p>=70 && p<=79)
    printf("Grade C");
    else if(p>=60 && p<=69)
    printf("Grade D");
    else 
    printf("Grade F");
}
