#include <stdio.h>

int main() {
    int num, i;

    // Ask user for the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    
    // Loop from 1 to 10 to print the table
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}