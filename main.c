#include <stdio.h>

int main() {
    int num1, num2;
    float fnum1, fnum2;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Convert to float for precise division
    fnum1 = (float)num1;
    fnum2 = (float)num2;

    // Calculations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    // Output
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    if (num2 != 0) {
        float quotient = fnum1 / fnum2;
        int remainder = num1 % num2;
        printf("Division: %.6f\n", quotient); // Display up to 6 decimal places
        printf("Modulus: %d %% %d = %d\n", num1, num2, remainder);
    } else {
        printf("Error: Division or modulus by zero is not allowed.\n");
    }

    return 0;
}
