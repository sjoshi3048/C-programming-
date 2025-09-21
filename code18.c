#include <stdio.h>
int main() {
    float l, b; // length and breadth
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);

    // Area = L*B
    printf("Area = %.2f\n", l*b);

    // Perimeter = 2*(L+B)
    printf("Perimeter = %.2f\n", 2*(l+b));

    return 0;
}