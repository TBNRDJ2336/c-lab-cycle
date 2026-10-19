#include <stdio.h>
void byValue(int x) {
    x = x + 10;
    printf("Inside byValue: x = %d\n", x);
}
void byRef(int *x) {
    *x = *x + 10;
    printf("Inside byRef: x = %d\n", *x);
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    byValue(a);
    printf("After byValue: a = %d\n", a);
    byRef(&a);
    printf("After byRef: a = %d\n", a);
    return 0;
}
