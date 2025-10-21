Q1- (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum.
Show Sample Test Cases
Input 1:
3 4
Output 1:
Sum = 7
Input 2:
-1 20
Output 2:
Sum = 19

#include <stdio.h>

int main() {
    
    float num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf(" %f ", sum);

    return 0;
}
