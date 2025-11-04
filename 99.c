//Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>
#include <string.h> 

void main() 
{
    char d[11];
    char date[12];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", d);
    
    int j = 0;
    int i = 0;
    
    while(d[i] != '\0')
    {
        if(d[i] == '/' && d[i+1] == '0' && d[i+2] == '4' && d[i+3] == '/')
        {
            date[j++] = '-';
            date[j++] = 'A';
            date[j++] = 'p';
            date[j++] = 'r';
            date[j++] = '-';
            i += 4;
        }
        else if(d[i] == '/')
        {
            date[j++] = '-';
            i++;
        }
        else
        {
            date[j++] = d[i];
            i++;
        }
    }
    date[j] = '\0';
    
    printf("Date = %s", date);
}