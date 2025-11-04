//Print the initials of a name.


#include <stdio.h>
#include <string.h>  
void main()
{
    char str[40];
    printf("Enter your full name: ");
    fgets(str, 40, stdin);

    printf("Initials: %c.", str[0]);
    for (int i = 0; str[i]!='\0' ; i++)
    {
        if (str[i] == ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }
}