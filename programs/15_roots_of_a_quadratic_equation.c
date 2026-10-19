#include <stdio.h>
#include <math.h>   /* compile with: gcc file.c -lm */
int main() {
    float a, b, c, d, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and distinct roots: %.2f, %.2f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Real and equal roots: %.2f\n", r1);
    } else {
        printf("Complex roots: %.2f + %.2fi, %.2f - %.2fi\n",
               -b / (2 * a), sqrt(-d) / (2 * a),
               -b / (2 * a), sqrt(-d) / (2 * a));
    }
    return 0;
}
