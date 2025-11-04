//Reverse each word in a sentence without changing the word order.


#include <stdio.h>
#include <string.h>

char* reverse(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        char t = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = t;
    }
    return str;
}

void main()
{
    char str[40], word[40];
    printf("Enter the string: \n");
    fgets(str, 40, stdin);
    
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == ' ' || ch == '\n')
        {
            word[j] = '\0';
            printf("%s ", reverse(word));
            j = 0;
        }
        else
        {
            word[j] = ch;
            j++;
        }
    }
}