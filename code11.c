#include <stdio.h>
int main() {
    float g, kg;
    printf("Enter grams: ");
    scanf("%f", &g);
    kg = g / 1000;
    printf("Kilograms = %.2f\n", kg);
    return 0;
}