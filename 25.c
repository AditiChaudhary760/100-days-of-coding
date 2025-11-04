//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>
void main()
{
    int a,b;char op;
    printf("Enter the  numbers and the operator (+,-,*,/,%%): \n");
    scanf ("%d %d %c", &a, &b, &op);
    switch (op)
    {
        case '+':
        printf("The result is: %d", (a+b));
        break;
        case '-':
        printf("The result is: %d", (a-b));
        break;
        case '*':
        printf("The result is: %d", (a*b));
        break;
        case '/':
        if(b!=0)
        printf("The result is: %d", (a/b));
        else 
        printf("Not possible...");
        break;
        case '%':
        if(b!=0)
        printf("The result is: %d", (a%b));
        else 
        printf("Not possible...");
        break;
        default:
        printf("Invalid operator...");
    }
}