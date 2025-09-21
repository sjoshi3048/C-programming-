#include <stdio.h>
int main() {
    float d, rs, p;
    printf("Enter dollars: ");
    scanf("%f", &d);
    rs = d * 48;
    p = rs / 70;
    printf("Pounds = %.2f\n", p);
    return 0;
}