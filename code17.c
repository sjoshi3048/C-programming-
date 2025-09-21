#include <stdio.h>
int main() {
    float l; // side length
    printf("Enter side length: ");
    scanf("%f", &l);

    // Area = L^2
    printf("Area = %.2f\n", l*l);

    // Perimeter = 4*L
    printf("Perimeter = %.2f\n", 4*l);

    return 0;
}