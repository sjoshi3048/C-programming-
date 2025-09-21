#include <stdio.h>

int main() {
    float gross, net, allowances, deductions;

    // Input gross salary
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    // Calculate allowances and deductions based on salary slabs
    if(gross > 10000) {
        allowances = 0.10 * gross;   // 10% allowances
        deductions = 0.03 * gross;   // 3% deductions
    } else if(gross > 5000) {
        allowances = 0.07 * gross;   // 7% allowances
        deductions = 0.02 * gross;   // 2% deductions
    } else {
        allowances = 0;
        deductions = 0;
    }

    // Calculate net salary
    net = gross + allowances - deductions;

    // Output net salary
    printf("Net salary: %.2f\n", net);

    return 0;
}