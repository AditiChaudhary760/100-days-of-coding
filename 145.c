#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;


Student getTopStudent(Student students[], int n) {
   
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return students[maxIndex];
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter roll for student %d: ", i + 1);
        scanf("%d", &students[i].roll);

        printf("Enter name for student %d: ", i + 1);
        scanf(" %49[^\n]", students[i].name);  
        

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    
    Student top = getTopStudent(students, n);

    
    printf("\nTop student:\n");
    printf("Roll: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
