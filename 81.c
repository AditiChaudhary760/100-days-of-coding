//Count characters in a string without using built-in length functions.


#include <stdio.h>
void main()
{
    char str[40];
    int f=0;
    printf("Enter the string: \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        f++;
    }
    printf("Length = %d", f-1);
}