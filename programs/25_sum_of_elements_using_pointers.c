#include <stdio.h>
int main() {
    int a[50], n, i, sum = 0, *p;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    p = a;
    for (i = 0; i < n; i++)
        sum += *(p + i);
    printf("Sum = %d\n", sum);
    return 0;
}
