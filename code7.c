#include <stdio.h>
int main() {
    int m;
    float h;
    printf("Enter minutes: ");
    scanf("%d", &m);
    h = m / 60.0;
    printf("Hours = %.2f\n", h);
    return 0;
}