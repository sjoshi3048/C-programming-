#include <stdio.h>

int main() {
    float gross, net, discount;

    // Input gross sales
    printf("Enter gross sales: ");
    scanf("%f", &gross);

    // Determine discount based on gross sales
    if(gross > 20000) {
        discount = 0.15 * gross;  // 15% discount
    } else if(gross > 10000) {
        discount = 0.10 * gross;  // 10% discount
    } else {
        discount = 0.05 * gross;  // 5% discount
    }

    // Calculate net sales
    net = gross - discount;

    // Output net sales
    printf("Net sales: %.2f\n", net);

    return 0;
}