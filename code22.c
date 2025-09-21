#include <stdio.h>
int main() {
    float g, net; // gross sales and net sales
    printf("Enter gross sales: ");
    scanf("%f", &g);

    // Discount = 10% of gross sales
    net = g - (0.10*g);

    printf("Net Sales = %.2f\n", net);

    return 0;
}