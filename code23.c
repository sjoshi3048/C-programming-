#include <stdio.h>
int main() {
    float s1, s2, s3, total, avg; // marks of 3 subjects
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    // Total = sum of marks
    total = s1+s2+s3;

    // Average = total/3
    avg = total/3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    return 0;
}