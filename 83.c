//Count vowels and consonants in a string.


#include <stdio.h>
void main()
{
    char str[40];
    int c=0,v=0;
    printf("Enter the string: \n");
    fgets(str,40,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            c++; 
    }
    printf("Vowels= %d, Consonants= %d", v, c);
}