//Remove all vowels from a string


#include <stdio.h>

void main()
{
  char str[40];
  printf("Enter a string:\n");
  fgets(str, 40, stdin);
  
  for (int i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        continue;
    }
    else
    {
        printf("%c", str[i]);
    }
  }
}