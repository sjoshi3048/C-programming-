#include <stdio.h>
int main() {
    float bytes;
    printf("Enter bytes: ");
    scanf("%f", &bytes);
    printf("KB = %.2f\n", bytes/1024);
    printf("MB = %.2f\n", bytes/(1024*1024));
    printf("GB = %.2f\n", bytes/(1024*1024*1024));
    return 0;
}