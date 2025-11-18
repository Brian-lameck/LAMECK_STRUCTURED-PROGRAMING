#include <stdio.h>
#define PI 3.14159265359

int main() {
    float radius, surfaceArea;

    // Input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculation
    surfaceArea = 4 * PI * radius * radius;

    // Output
    printf("The surface area of the sphere is: %.6f\n", surfaceArea);

    return 0;
}
