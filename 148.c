#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (s1.roll_no != s2.roll_no) return 0;
    if (strcmp(s1.name, s2.name) != 0) return 0;
    if (s1.marks != s2.marks) return 0;
    return 1;
}

int main() {
    struct Student a, b;

    printf("Enter details for student A:\n");
    printf("Roll no: ");
    scanf("%d", &a.roll_no);
    printf("Name: ");
    // read whitespace-containing string
    getchar();  // consume newline
    fgets(a.name, sizeof(a.name), stdin);
    // remove newline from name
    a.name[strcspn(a.name, "\n")] = 0;
    printf("Marks: ");
    scanf("%f", &a.marks);

    printf("\nEnter details for student B:\n");
    printf("Roll no: ");
    scanf("%d", &b.roll_no);
    printf("Name: ");
    getchar();
    fgets(b.name, sizeof(b.name), stdin);
    b.name[strcspn(b.name, "\n")] = 0;
    printf("Marks: ");
    scanf("%f", &b.marks);

    if (areIdentical(a, b)) {
        printf("\nStructs are identical.\n");
    } else {
        printf("\nStructs are NOT identical.\n");
    }

    return 0;
}
