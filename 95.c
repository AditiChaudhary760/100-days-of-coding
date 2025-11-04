//Check if one string is a rotation of another.


#include <stdio.h>
#include <string.h>

void main()
{
    char str1[40], str2[40];
    int l1, l2, f = 0, a = 0;
    
    printf("Enter 1st string:\n");
    fgets(str1, 40, stdin);
    printf("Enter 2nd string:\n");
    fgets(str2, 40, stdin);
    
    l1 = strlen(str1);
    l2 = strlen(str2);
    
    if(l1 == l2)
    {
        for(int i = 0; i < l1 - 1; i++)
        {
            if(str1[i] == str2[0])
            {
                a = i;
                f = 1;
                for(int j = 0; j < l2 - 1; j++)
                {
                    if(str1[(a + j) % (l1 - 1)] != str2[j])
                    {
                        f = 0;
                        break;
                    }
                }
                if(f == 1)
                    break;
            }
        }
    }
    
    if(f == 1)
        printf("Rotation.\n");
    else
        printf("Not rotation.\n");
}