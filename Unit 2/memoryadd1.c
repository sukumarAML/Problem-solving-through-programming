#include <stdio.h>

int main(void) {
    int age = 25;
    int reg_no = 12345;

    // Use & to get the address and %p to print it
    printf("The value of age is: %d\n", age);
    printf("The memory address of age is: %p\n", (void*)&age);
    printf("The value of reg_no is: %d\n", reg_no);
    printf("The memory address of age is: %p\n", (void*)&reg_no);

    return 0;
}
