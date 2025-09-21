#include <stdio.h>
int main() {
    float d, rs;
    printf("Enter dollars: ");
    scanf("%f", &d);
    rs = d * 48;
    printf("Rupees = %.2f\n", rs);
    return 0;
}