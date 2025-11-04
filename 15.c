//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


#include <stdio.h>
void main()
{
    char chr;
    printf("Enter a character: \n");
    scanf("%c", &chr);
    int a = chr;
    if(a>=65 && a<=90)
    printf("Uppercase alphabet");
    else if (a>=97 && a<=122)
    printf("Lowercase alphabet");
    else if(a>=48 && a<=57)
    printf("Digit");
    else
    printf("Special character");
} 
