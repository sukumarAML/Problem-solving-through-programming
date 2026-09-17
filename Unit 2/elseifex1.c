#include<stdio.h>

                    int main() {
                        char operator;
                        float num1, num2, result;
                        
                        printf("Enter an operator (+, -, *, /): ");
                        scanf("%c", &operator);
                        
                        printf("Enter two numbers: ");
                        scanf("%f %f", &num1, &num2);
                        
                        if (operator == '+') {
                            result = num1 + num2;
                            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                        }
                        else if (operator == '-') {
                            result = num1 - num2;
                            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                        }
                        else if (operator == '*') {
                            result = num1 * num2;
                            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                        }
                        else if (operator == '/') {
                            if (num2 != 0) {
                                result = num1 / num2;
                                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                            }
                            else {
                                printf("Error: Division by zero!\n");
                            }
                        }
                        else {
                            printf("Invalid operator!\n");
                        }
                        
                        return 0;
                    }