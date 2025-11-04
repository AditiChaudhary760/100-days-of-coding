// Count frequency of a given character in a string.


#include <stdio.h>
void main()
{
    char str[40],ch;
    int f=0;
    printf("Enter the string: \n");
    fgets(str,40,stdin);
    printf ("Enter the character whose frequency is to be checked:\n");
    scanf("%c", &ch);
    for (int i=0; str[i]!='\0';i++)
    {
        if(str[i]==ch)
        f++;
    }
    printf("Frequency of %c = %d", ch, f);
}