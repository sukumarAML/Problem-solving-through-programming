#include<stdio.h>

                int main() {
                    int number;
                    
                    printf("Enter a number: ");
                    scanf("%d", &number);
                    
                    if (number > 0) {
                        printf("%d is a positive number.\n", number);
                        
                        if (number % 2 == 0) {
                            printf("It's also an even number.\n");
                        }
                        else {
                            printf("It's also an odd number.\n");
                        }
                    }
                    else if (number < 0) {
                        printf("%d is a negative number.\n", number);
                    }
                    else {
                        printf("The number is zero.\n");
                    }
                    
                    return 0;
                }
                        