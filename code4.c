#include <stdio.h>
int main() {
    float a, b, div;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    div = a / b;
    printf("Quotient = %.2f\n", div);
    return 0;
}