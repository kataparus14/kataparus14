//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#define PI 3.14

// Function declarations
float luas(float radius);
float keliling(float radius);

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Luas Lingkaran: %.2f\n", luas(radius));
    printf("Keliling Lingkaran: %.2f\n", keliling(radius));

    return 0;
}

// Function definitions
float luas(float radius) {
    return PI * radius * radius;
}

float keliling(float radius) {
    return 2 * PI * radius;
}
