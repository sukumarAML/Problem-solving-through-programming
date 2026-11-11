#include <stdio.h>

int main() {
    int n, i;
    int num, max;

    printf("Enter how many numbers you want to compare: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid positive count.\n");
        return 1;
    }

    // Read the first number to initialize max
    printf("Enter number 1: ");
    scanf("%d", &max);

    // Loop through the remaining n - 1 numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The largest value is: %d\n", max);

    return 0;
}
