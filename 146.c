#include <stdio.h>
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
    printf("Employee Details:\n");
    printf("ID: %d\n", e->empId);
    printf("Name: %s\n", e->name);
    printf("Salary: %.2f\n", e->salary);
    printf("Date of Joining: %02d/%02d/%04d\n",
           e->doj.day, e->doj.month, e->doj.year);
}

int main() {
    Employee emp;

    
    printf("Enter employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter name: ");
    
    scanf(" %49[^\n]", emp.name);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter date of joining (day month year): ");
    scanf("%d %d %d",
        &emp.doj.day,
        &emp.doj.month,
        &emp.doj.year
    );

    
    printEmployee(&emp);

    return 0;
}
