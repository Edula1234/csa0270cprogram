#include <stdio.h>

// Define the employee structure
struct Employee {
    int employeeID;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    // Declare and initialize an employee structure variable
    struct Employee emp;

    // Accept employee details from the user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.employeeID);

    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter Designation: ");
    scanf("%s", emp.designation);

    printf("Enter Department: ");
    scanf("%s", emp.department);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Display the employee details
    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", emp.employeeID);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: $%.2f\n", emp.salary);

    return 0;
}
