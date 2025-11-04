//Print all sub-strings of a string


#include <stdio.h>
#include <string.h> 

void main() 
{
    char str[40];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int l = strlen(str);
    
    for(int s = 0; s < l; s++)
    {
        for(int e = s; e < l; e++)
        {
            for(int k = s; k <= e; k++)
            {
                printf("%c", str[k]);
            }
            printf(", ");
        }
    }
}