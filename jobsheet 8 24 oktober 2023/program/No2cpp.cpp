//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum: %.2f\n", add(num1, num2));
    printf("Difference: %.2f\n", subtract(num1, num2));
    printf("Product: %.2f\n", multiply(num1, num2));
    
    if (num2 != 0) {
        printf("Quotient: %.2f\n", divide(num1, num2));
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
