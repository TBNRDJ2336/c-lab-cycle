#include <stdio.h>
int main() {
    int a[50], n, i, pos, x;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position (1-%d) and element: ", n + 1);
    scanf("%d %d", &pos, &x);
    for (i = n - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];
    a[pos - 1] = x;
    n++;
    printf("New array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
