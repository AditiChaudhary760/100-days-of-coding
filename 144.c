#include <stdio.h>


struct Student {
    int roll;
    char name[50];
    float marks;
};


void printStudent(struct Student s) {
    printf("Student details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}


void printStudentPtr(const struct Student *s) {
    printf("Student details (via pointer):\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student stud1;

    
    printf("Enter roll number: ");
    scanf("%d", &stud1.roll);
    printf("Enter name: ");
    scanf(" %49[^\n]", stud1.name);  
    printf("Enter marks: ");
    scanf("%f", &stud1.marks);


    printStudent(stud1);

    
    printStudentPtr(&stud1);

    return 0;
}
