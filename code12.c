#include <stdio.h>
int main() {
    float kg, g;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    g = kg * 1000;
    printf("Grams = %.2f\n", g);
    return 0;
}