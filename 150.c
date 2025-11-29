#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    
    struct Student s1;
    
 
    struct Student *ptr;
  
    ptr = &s1;
    

    ptr->roll_no = 101;
    strcpy(ptr->name, "Alice");
    ptr->marks = 88.5f;
    
   
    printf("Student details:\n");
    printf("Roll no: %d\n", ptr->roll_no);
    printf("Name   : %s\n", ptr->name);
    printf("Marks  : %.2f\n", ptr->marks);
    
    return 0;
}
