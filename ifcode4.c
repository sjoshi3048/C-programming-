#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 7
    if(num % 7 == 0) {
        printf("%d is divisible by 7\n", num);
    } else {
        printf("%d is not divisible by 7\n", num);
    }

    return 0;
}