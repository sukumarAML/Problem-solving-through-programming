#include <stdio.h>

int main() {
    char binary[] = "1010";
    int decimal = 0;

    for (int i = 0; binary[i] != '\0'; i++) {
        // Shift previous total left (multiply by 2) and add the new bit
        decimal = (decimal * 2) + (binary[i] - '0');
        printf("decimal:%d\n",decimal);
    }

    printf("Decimal value: %d\n", decimal); // Prints 10
    return 0;
}
