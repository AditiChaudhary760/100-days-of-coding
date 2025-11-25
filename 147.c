#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int day;
    int month;
    int year;
} Date;


typedef struct {
    int empId;
    char name[50];
    float salary;
    Date doj;  
} Employee;


void printEmployee(const Employee *e) {
    printf("Employee ID: %d\n", e->empId);
    printf("Name       : %s\n", e->name);
    printf("Salary     : %.2f\n", e->salary);
    printf("Date of Joining: %02d/%02d/%04d\n\n",
           e->doj.day, e->doj.month, e->doj.year);
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    Employee *emps = malloc(n * sizeof(Employee));
    if (!emps) {
        perror("Memory allocation failed");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("  Employee ID: ");
        scanf("%d", &emps[i].empId);

        printf("  Name: ");
        scanf(" %49[^\n]", emps[i].name);  

        printf("  Salary: ");
        scanf("%f", &emps[i].salary);

        printf("  Date of Joining (day month year): ");
        scanf("%d %d %d",
              &emps[i].doj.day,
              &emps[i].doj.month,
              &emps[i].doj.year);
    }

   
    FILE *fp = fopen("employees.dat", "wb");
    if (!fp) {
        perror("Could not open file for writing");
        free(emps);
        return 1;
    }

    size_t written = fwrite(emps, sizeof(Employee), n, fp);
    if (written != (size_t)n) {
        fprintf(stderr, "Error: could only write %zu of %d employees\n", written, n);
    }

    fclose(fp);

    free(emps);
    emps = NULL;

   
    fp = fopen("employees.dat", "rb");
    if (!fp) {
        perror("Could not open file for reading");
        return 1;
    }

    Employee *emps_in = malloc(n * sizeof(Employee));
    if (!emps_in) {
        perror("Memory allocation failed");
        fclose(fp);
        return 1;
    }

    
    size_t read = fread(emps_in, sizeof(Employee), n, fp);
    if (read != (size_t)n) {
        fprintf(stderr, "Error: could only read %zu of %d employees\n", read, n);
    }

    fclose(fp);


    printf("\nEmployees read from file:\n");
    for (int i = 0; i < (int)read; i++) {
        printEmployee(&emps_in[i]);
    }

    free(emps_in);
    return 0;
}
