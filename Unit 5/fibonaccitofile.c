#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // 1. Ask the user how many terms to generate
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // 2. Open a file in write ("w") mode
    FILE *file = fopen("fibonacci.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    fprintf(file, "Fibonacci Series (%d terms):\n", n);

    // 3. Loop 'n' times to print to both console and file
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        fprintf(file, "%d ", first);

        // Calculate the next term and shift values forward
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    fprintf(file, "\n");

    // 4. Close the file to save changes
    fclose(file);
    printf("Fibonacci series saved to fibonacci.txt successfully!\n");

    return 0;
}
