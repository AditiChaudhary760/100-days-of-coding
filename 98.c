//Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>  
void main()
{
    char str[40];
    printf("Enter your full name: ");
    fgets(str, 40, stdin);
    int f = 0;
    printf("Initials: %c.", str[0]);
    for (int i = 0; str[i]!='\0' ; i++)
    {
        if (str[i] == ' ')
        {
            f++;
        }
    }
    int c = 0;
    for (int i = 0; str[i]!='\0' ; i++)
    {
        if (str[i] == ' ')
        {
            c++;
            if (c == f)
            {
                printf(" %s", &str[i + 1]);
            }
            else
            {
                printf("%c.", str[i + 1]);
            }
        }
    }
}