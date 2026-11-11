#include <stdio.h>
#include <string.h>

// Define the structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function that accepts a structure, updates it, and returns the updated structure
struct Employee updateSalary(struct Employee emp, float incrementPercent) {
    emp.salary = emp.salary + (emp.salary * (incrementPercent / 100.0));
    return emp;
}

int main() {
    struct Employee e1;

    // Initialize the structure
    e1.id = 101;
    strcpy(e1.name, "Rahul Sharma");
    e1.salary = 50000.00;

    printf("--- Before Salary Update ---\n");
    printf("ID: %d | Name: %s | Salary: %.2f\n", e1.id, e1.name, e1.salary);

    // Pass structure to function and store the returned updated structure
    e1 = updateSalary(e1, 10.0); // 10% raise

    printf("\n--- After 10%% Salary Update ---\n");
    printf("ID: %d | Name: %s | Salary: %.2f\n", e1.id, e1.name, e1.salary);

    return 0;
}
