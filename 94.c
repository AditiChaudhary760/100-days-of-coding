//Find the longest word in a sentence.


#include <stdio.h>
#include <string.h>

void main()
{
    char str[40];
    int l[60], f = 0, a = 0;
    printf("Enter a string:\n");
    fgets(str, 40, stdin);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == ' ' || ch == '\n')
        {
            l[a++] = f;
            f = 0;
        }
        else
        {
            f++;
        }
    }
    
    if (f > 0) 
    {
        l[a++] = f;
    }
    
    int max = l[0];
    for (int i = 1; i < a; i++)
    {
        if (l[i] > max)
        {
            max = l[i];
        }
    }
    
    int start = 0;
    f = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == ' ' || ch == '\n')
        {
            if (f == max)
            {
                printf("Longest word: ");
                for (int j = start; j < i; j++)
                {
                    printf("%c", str[j]);
                }
                printf("\n");
                break;
            }
            start = i + 1;
            f = 0;
        }
        else
        {
            f++;
        }
    }
}