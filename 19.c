//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the length of the triangle sides: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
    printf("It is an Equilateral triangle. \n");
    else if(a==b || b==c || c==a)
    printf("It is an isosceles triangle. \n");
    else
    printf("It is a Scalene triangle. \n");
}
