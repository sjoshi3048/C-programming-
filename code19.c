#include <stdio.h>
int main() {
    float r; // radius
    printf("Enter radius: ");
    scanf("%f", &r);

    // Area = (22/7) * R^2
    printf("Area = %.2f\n", (22.0/7)*r*r);

    return 0;
}