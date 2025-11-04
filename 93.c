//Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>

int main()
{
    char str1[40], str2[40];
    int l1, l2, s1 = 0, s2 = 0, f = 0;
    int v[40] = {0};

    printf("Enter two strings:\n");
    scanf("%s %s", str1, str2);

    l1 = strlen(str1);
    l2 = strlen(str2);

    if(l1 != l2)
    {
        printf("Not anagrams");
        return 0;
    }

    for(int i = 0; i < l1; i++)
    {
        s1 = s1 + str1[i];
        s2 = s2 + str2[i];
    }

    for(int i = 0; i < l1; i++)
    {
        for(int j = 0; j < l2; j++)
        {
            if(str1[i] == str2[j] && v[j] == 0)
            {
                f++;
                v[j] = 1;
                break;
            }
        }
    }

    if(f == l1 && s1 == s2)
    {
        printf("Anagrams");
    }
    else 
    {
        printf("Not Anagrams");
    }

    return 0;
}