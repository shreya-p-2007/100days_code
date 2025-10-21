Q2 (User Inputs, Operations & Output)

Write a program to input two numbers and display their sum, difference, product, and quotient.
Show Sample Test Cases
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

#include <stdio.h>
int main() {
    float num1, num2;
  
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Sum: %f\n", num1 + num2);

    printf("Difference: %f\n", num1 - num2);

    printf("Product: %f\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %f\n", num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
