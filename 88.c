// Replace the spaces with the hyphens in a string.


#include <stdio.h>
void main()
{
    char str [40];
    printf("Enter a string= \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch==' ')
        {
            ch='-';
            str[i]=ch;
        }
    }
    printf("%s", str);
}