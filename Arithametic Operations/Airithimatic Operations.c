#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Perform arithmetic operations
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    
    // Check for division by zero before performing division
    if (num2 != 0) {
        int remainder = num1 % num2;
        printf("Addition: %d\n", addition);
        printf("Subtraction: %d\n", subtraction);
        printf("Multiplication: %d\n", multiplication);
        printf("Remainder: %d\n", remainder);
    } else {
        printf("Addition: %d\n", addition);
        printf("Subtraction: %d\n", subtraction);
        printf("Multiplication: %d\n", multiplication);
        printf("Division by zero is not allowed.\n");
    }
    
    return 0;
}
