#include <stdio.h>

int main() {
    int score;

    printf("enter your score:");
    scanf("%d", &score);
    printf("Your score is: %d\n", score);

    if (score >= 90) {
        printf("Grade: A\n");
    } 
    else if (score >= 80) {
        // This runs because 85 is not >= 90, but IS >= 80
        printf("Grade: B\n"); 
    } 
    else if (score >= 70) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
