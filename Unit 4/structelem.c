#include <stdio.h>

// 1. Define the structure
struct Student {
    int rollNumber;
    float marks;
};

int main() {
    // 2. Declare an array of 10 structures
    struct Student classList[10];

    // 3. Initialize the 10 elements using a loop
    for (int i = 0; i < 10; i++) {
        classList[i].rollNumber = 101 + i;    // Assigns 101, 102, 103...
        classList[i].marks = 75.5f + (i * 2); // Assigns 75.5, 77.5, 79.5...
    }

    // 4. Print the 10 structure elements
    printf("%-15s %-10s\n", "Roll Number", "Marks");
    printf("---------------------------\n");
    
    for (int i = 0; i < 10; i++) {
        // Access each element using the array index and dot operator
        printf("%-15d %-10.2f\n", classList[i].rollNumber, classList[i].marks);
    }

    return 0;
}
