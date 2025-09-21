#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Compare numbers to find largest and smallest
    if(a > b) {
        printf("Largest: %d\n", a);
        printf("Smallest: %d\n", b);
    } else {
        printf("Largest: %d\n", b);
        printf("Smallest: %d\n", a);
    }

    return 0;
}