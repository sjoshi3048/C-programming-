#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest
    largest = a;
    if(b > largest) largest = b;
    if(c > largest) largest = c;

    // Find smallest
    smallest = a;
    if(b < smallest) smallest = b;
    if(c < smallest) smallest = c;

    // Output results
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}