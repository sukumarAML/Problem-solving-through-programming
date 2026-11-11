#include <stdio.h>

int main() {
    int num, isSquare = 0;
    long long i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i * i <= num; i++) {
        if (i * i == num) {
            isSquare = 1;
            break;
        }
    }

    if (isSquare == 1) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
