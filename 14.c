//Write a program to input a character and check whether it is a vowel or consonant using if–else.


#include <stdio.h>
void main()
{
    char chr;
    printf("Enter a character: \n");
    scanf("%c", &chr);
    if('a'==chr || 'e'==chr || 'i'==chr || 'o'==chr || 'u'==chr || 'A'==chr || 'E'==chr || 'I'==chr || 'O'==chr || 'U'==chr)
    printf("Vowel");
    else
    printf("Consonant");
}