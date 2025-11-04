// Count spaces, digits, and special characters in a string.


#include <stdio.h>
void main()
{
    char str [40];
    int s=0,d=0,c=0,a=0;
    printf("Enter a string= \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch==' ')
        s++;
        else if(ch>='0' && ch<='9')
        d++;
        else if(ch >='a' && ch <='z' || ch >='A' && ch <='Z')
        a++;
        else
        c++;
    }
    printf("Spaces = %d, Digits =%d, Special characters= %d", s, d, c-1);
}