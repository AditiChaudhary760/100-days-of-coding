//Reverse a string.


#include <stdio.h>
void main()
{
    char str [40];
    char str2 [40];
    int f=0;
    printf("Enter a string= \n");
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        f++;
    }
    int j=0;
    for(int i=(f-1);i>=0;i--)
    {
        str2[j++]= str[i];
    }
    str2[j]='\0';
    printf("Original string = %s", str);
    printf("\nReversed string = %s", str2);
}