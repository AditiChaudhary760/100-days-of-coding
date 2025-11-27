#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *stu = NULL;

   
    stu = (struct Student *) malloc(sizeof(struct Student));
    if (stu == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter student name: ");
   
    scanf("%49s", stu->name);
    printf("Enter roll number: ");
    scanf("%d", &stu->roll_no);
    printf("Enter marks: ");
    scanf("%f", &stu->marks);

   
    printf("\nStudent Details:\n");
    printf("Name: %s\n", stu->name);
    printf("Roll No: %d\n", stu->roll_no);
    printf("Marks: %.2f\n", stu->marks);

    
    free(stu);

    return 0;
}
