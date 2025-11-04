//Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>
void main()
{
    int n, s, b = 0, p = 1;  
    printf("Enter a number: \n");
    scanf("%d", &n);
    while(n != 0)
    {
        s = n % 2;
        b = s * p + b;   
        n = n / 2;
        p = p * 10;
    }
    printf("%d", b);
}