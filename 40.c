//Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>
void main() 
{
    int num, digit, result = 0, place = 1, digits = 0, temp;
    printf("Enter a binary no.= \n");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) 
    {
        digit = temp % 10;
        if (digit == 0)
            result += 1 * place;
        temp /= 10;
        place *= 10;
    }

    printf("%0*d\n", digits, result);
}