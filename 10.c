//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>
void main(){
    int a;
    printf("Enter the time in seconds: \n");
    scanf("%d", &a);
    printf("Time= %d:%d:%d\n", a/3600, (a%3600)/60, (a%3600)%60);
}