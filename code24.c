#include <stdio.h>
int main() {
    int a, b, temp; // variables
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using temp variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}