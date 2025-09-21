#include <stdio.h>
int main() {
    float h, b; // height and base
    printf("Enter height and base: ");
    scanf("%f %f", &h, &b);

    // Area = 1/2 * base * height
    printf("Area = %.2f\n", 0.5*h*b);

    return 0;
}