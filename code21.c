#include <stdio.h>
int main()
{
    float g, net; // gross salary and net salary
    printf("Enter gross salary: ");
    scanf("%f", &g);

    // Allowances = 10% of gross, Deductions = 3% of gross
    net = g + (0.10 * g) - (0.03 * g);

    printf("Net Salary = %.2f\n", net);

    return 0;
}