#include <stdio.h>
int main() {
    float p, r, n, i;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &p, &r, &n);
    i = p*r*n/100;
    printf("Interest = %.2f\n", i);
    return 0;
}