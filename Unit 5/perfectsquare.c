#include <stdio.h>

int main() {
    int num;
    long long i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not a perfect square.\n", num);
        return 0;
    }

    while (i * i < num) {
        i++;
    }

    if (i * i == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
