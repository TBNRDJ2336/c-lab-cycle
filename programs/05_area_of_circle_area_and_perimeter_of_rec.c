#include <stdio.h>
#define PI 3.14159
int main() {
    float r, l, b;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f\n", PI * r * r);
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area = %.2f\n", l * b);
    printf("Perimeter = %.2f\n", 2 * (l + b));
    return 0;
}
