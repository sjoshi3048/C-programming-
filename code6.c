#include <stdio.h>
int main() {
    int h, m;
    printf("Enter hours: ");
    scanf("%d", &h);
    m = h * 60;
    printf("Minutes = %d\n", m);
    return 0;
}