#include <stdio.h>
int main() {
    int a[50], b[50], c[100], n, m, i, k = 0;
    printf("Size of first array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Size of second array: ");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
        c[k++] = a[i];
    for (i = 0; i < m; i++)
        c[k++] = b[i];
    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
