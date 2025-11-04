//Convert a lowercase string to uppercase without using built-in functions.


#include <stdio.h>
void main()
{
    char str[40];
    int j;
    printf("Enter the string: \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch = str[i];
        if(ch>='A' && ch<='Z')
            printf("%c", str[i]);
        else if(ch>='a' && ch<='z')
        {
            int j= (int)ch - 32;
            printf("%c", (char)j);  
        }
        else
            printf("%c", str[i]);
    }
   
}