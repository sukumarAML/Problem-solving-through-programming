#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to search an employee by ID and return the matching structure
struct Employee searchEmployeeById(struct Employee emp[], int n, int targetId) {
    for (int i = 0; i < n; i++) {
        if (emp[i].id == targetId) {
            return emp[i]; // Return the matching structure
        }
    }

    // Return a sentinel structure with id = -1 if not found
    struct Employee notFound = {-1, "Not Found", 0.0};
    return notFound;
}

int main() {
    struct Employee staff[] = {
        {101, "Ananya Iyer", 55000.00},
        {102, "Karthik Rajan", 62000.00},
        {103, "Priya Menon", 58500.00},
        {104, "Vikram Nair", 71000.00}
    };
    int n = sizeof(staff) / sizeof(staff[0]);
    int searchId;

    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);

    struct Employee result = searchEmployeeById(staff, n, searchId);

    if (result.id != -1) {
        printf("\n--- Employee Found ---\n");
        printf("ID:     %d\n", result.id);
        printf("Name:   %s\n", result.name);
        printf("Salary: %.2f\n", result.salary);
    } else {
        printf("\nEmployee with ID %d not found.\n", searchId);
    }

    return 0;
}
