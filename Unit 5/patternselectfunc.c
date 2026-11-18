#include <stdio.h>

// Function prototypes
void printPyramid(int rows, char symbol);
void printDiamond(int rows, char symbol);
void printHollowSquare(int rows, char symbol);

int main() {
    int choice, rows;
    char symbol;

    // 1. Display menu options
    printf("=== Pattern Generator ===\n");
    printf("1. Pyramid\n");
    printf("2. Diamond\n");
    printf("3. Hollow Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Validate choice before asking for dimensions
    if (choice < 1 || choice > 3) {
        printf("Invalid choice! Please run the program again and select 1, 2, or 3.\n");
        return 1;
    }

    // 2. Get pattern size and character
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter symbol to print: ");
    scanf(" %c", &symbol); // Space before %c ignores leftover newline from previous input

    printf("\n");

    // 3. Switch case to select and call the right pattern function
    switch (choice) {
        case 1:
            printPyramid(rows, symbol);
            break;
        case 2:
            printDiamond(rows, symbol);
            break;
        case 3:
            printHollowSquare(rows, symbol);
            break;
        default:
            printf("Invalid selection.\n");
            break;
    }

    return 0;
}

// Function 1: Upright Pyramid
void printPyramid(int rows, char symbol) {
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("%c", symbol);
        printf("\n");
    }
}

// Function 2: Full Diamond
void printDiamond(int rows, char symbol) {
    // Upper half
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("%c", symbol);
        printf("\n");
    }
    // Lower half
    for (int i = rows - 1; i >= 1; i--) {
        for (int s = 1; s <= rows - i; s++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("%c", symbol);
        printf("\n");
    }
}

// Function 3: Hollow Square
void printHollowSquare(int rows, char symbol) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("%c ", symbol);
            else
                printf("  ");
        }
        printf("\n");
    }
}
