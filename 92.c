//Find the first repeating lowercase alphabet in a string.


#include <stdio.h>

void main()
{
    char str[40];
    printf("Enter a string:\n");
    fgets(str, 40, stdin);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            int f = 0;
            for (int j = i + 1; str[j] != '\0'; j++)
            {
                if (ch == str[j])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                printf("First repeating lowercase alphabet is %c\n", ch);
                return;
            }
        }
    }
    
    printf("No repeating lowercase alphabet!!!! \n");
}