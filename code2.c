#include <stdio.h>
int main() {
    int a, b, sub;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("Difference = %d\n", sub);
    return 0;
}