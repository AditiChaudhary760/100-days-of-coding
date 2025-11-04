//Print each character of a string on a new line.


#include <stdio.h>
void main()
{
    char str[40];
    printf("Enter the string: \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c\n", str[i]);
    }
}