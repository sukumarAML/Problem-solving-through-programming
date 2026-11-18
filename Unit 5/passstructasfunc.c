#include <stdio.h>

// 1. Structure Definition
struct Rectangle {
    float length;
    float width;
};

// 2. Function to calculate and print properties (Pass by Value)
void calculate_properties(struct Rectangle r) {
    float area = r.length * r.width;
    float perimeter = 2 * (r.length + r.width);

    printf("\n--- Calculation Results ---\n");
    printf("Length: %.2f, Width: %.2f\n", r.length, r.width);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
}

int main() {
    struct Rectangle rect1;

    printf("Enter Length of Rectangle: ");
    scanf("%f", &rect1.length);
    printf("Enter Width of Rectangle: ");
    scanf("%f", &rect1.width);

    // 3. Pass the entire structure rect1 to the function
    calculate_properties(rect1);

    return 0;
}