//Check if a string is a palindrome.


#include <stdio.h>
#include <string.h>
void main()
{
    char str1 [40];
    char str2 [40];
    int f=0;
    printf("Enter a string= \n");
    scanf("%s", str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        f++;
    }
    int j=0;
    for(int i=(f-1);i>=0;i--)
    {
        str2[j++]= str1[i];
    }
    str2[j]='\0';
    if(strcmp(str1, str2) == 0)
    printf("Palindrome");
    else 
    printf("Not Palindrome");
}