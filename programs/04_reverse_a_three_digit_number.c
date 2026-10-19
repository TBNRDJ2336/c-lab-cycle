#include <stdio.h>
int main() {
    int n, a, b, c, rev;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    rev = c * 100 + b * 10 + a;
    printf("Reverse = %d\n", rev);
    return 0;
}
