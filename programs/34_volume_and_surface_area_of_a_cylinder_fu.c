#include <stdio.h>
#define PI 3.14159
float volume(float r, float h) {
    return PI * r * r * h;
}
float surface(float r, float h) {
    return 2 * PI * r * (r + h);
}
int main() {
    float r, h;
    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);
    printf("Volume = %.2f\n", volume(r, h));
    printf("Surface area = %.2f\n", surface(r, h));
    return 0;
}
