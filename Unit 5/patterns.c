// #include <stdio.h>

// int main() {
//     int rows = 5;
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int rows = 5;
//     for (int i = rows; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int rows = 5;
//     for (int i = 1; i <= rows; i++) {
//         // Print leading spaces
//         for (int space = 1; space <= rows - i; space++) {
//             printf("  ");
//         }
//         // Print stars
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int rows = 5;
//     char alphabet = 'A';
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", alphabet);
//         }
//         alphabet++;
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//    int rows, coef = 1, space, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 0; i < rows; i++) {
//       for (space = 1; space <= rows - i; space++)
//          printf("  ");
//       for (j = 0; j <= i; j++) {
//          if (j == 0 || i == 0)
//             coef = 1;
//          else
//             coef = coef * (i - j + 1) / j;
//          printf("%4d", coef);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main() {
//    int rows, i, j, number = 1;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; i++) {
//       for (j = 1; j <= i; ++j) {
//          printf("%d ", number);
//          ++number;
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0, count = 0, count1 = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (space = 1; space <= rows - i; ++space) {
//          printf("  ");
//          ++count;
//       }
//       while (k != 2 * i - 1) {
//          if (count <= rows - 1) {
//             printf("%d ", i + k);
//             ++count;
//          } else {
//             ++count1;
//             printf("%d ", (i + k - 2 * count1));
//          }
//          ++k;
//       }
//       count1 = count = k = 0;
//       printf("\n");
//    }
//    return 0;
// }


#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the top half

    // 1. TOP HALF (Full Pyramid)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces: (n - i)
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars: (2 * i - 1)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. BOTTOM HALF (Inverted Pyramid)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces: (n - i)
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars: (2 * i - 1)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// https://www.youtube.com/watch?v=lsOOs5J8ycw

// Pattern element	Formula
// Right triangle stars	i
// Inverted triangle stars	n-i+1
// Left triangle spaces	n-i
// Pyramid stars	2*i-1
// Pyramid spaces	n-i
// Diamond stars	2*i-1
