#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    float gpa;
};

int main() {
    union Student student; // Declare a union variable of type Student

    // Prompt the user to enter the student's name
    printf("Enter student's name (up to 50 characters): ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove the newline character

    // Prompt the user to enter the student's GPA
    printf("Enter student's GPA: ");
    scanf("%f", &student.gpa);

    // Print the student's name and GPA
    printf("Student's name: %s\n", student.name);
    printf("Student's GPA: %.2f\n", student.gpa);

    return 0;
}
