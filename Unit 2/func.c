#include <stdio.h>

// 1. Function Declaration (Prototype)
int add(int a, int b);

int main() {
    int num1 = 10, num2 = 20;
    int sum;

    // 2. Function Call (passing num1 and num2 as "arguments")
    sum = add(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}

// 3. Function Definition
int add(int a, int b) {
    int result;
    result = a + b;
    return result; // Returning the integer value
}
