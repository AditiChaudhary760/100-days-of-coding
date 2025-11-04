/*Write a program to print the following pattern:

*

***

*****
*******
***

*        */


#include <stdio.h>
void main()
{
    printf("Pattern:- \n");
    for(int i=1;i<=5;i++)
       {
           for(int j=1;j<=i;j++)
           {
               if(i%2!=0)
               printf("*");
               else
               printf(" ");
           }
          printf("\n");
       }
       printf("******* \n");
       for(int i=3;i>=1;i--)
       {
          for(int j=1;j<=i;j++)
          {
              if(i%2==0)
              printf(" ");
              else
              printf("*");
            }
          printf("\n");
       }
}
