//Toggle case of each character in a string.


#include <stdio.h>
void main()
{
    char str[40];
    printf("Enter the string: \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch = str[i];
        if(ch>='A' && ch<='Z')
        {
            int j= (int)ch + 32;
            printf("%c", (char)j);
        }
        else if(ch>='a' && ch<='z')
        {
            int j= (int)ch - 32;
            printf("%c", (char)j);  
        }
        else
            printf("%c", str[i]);
    }
}