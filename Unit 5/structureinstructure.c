#include <stdio.h>

// 1. Inner Structure Definition
struct Date {
    int day;
    int month;
    int year;
};

// 2. Outer Structure Definition (Nested Structure)
struct Employee {
    int id;
    char name[50];
    struct Date joining_date; // Instance of Date structure
};

int main() {
    struct Employee emp1;

    // 3. Input Employee Details
    printf("Enter Employee ID: ");
    scanf("%d", &emp1.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp1.name);

    // 4. Input Nested Date Details
    printf("Enter Joining Day (DD): ");
    scanf("%d", &emp1.joining_date.day);
    printf("Enter Joining Month (MM): ");
    scanf("%d", &emp1.joining_date.month);
    printf("Enter Joining Year (YYYY): ");
    scanf("%d", &emp1.joining_date.year);

    // 5. Display Details
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Joining Date: %d/%d/%d\n",
           emp1.joining_date.day,
           emp1.joining_date.month,
           emp1.joining_date.year);

    return 0;
}