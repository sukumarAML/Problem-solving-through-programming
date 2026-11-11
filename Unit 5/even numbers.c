#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d even numbers are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", 2 * i);
    }
    printf("\n");

    return 0;
}
