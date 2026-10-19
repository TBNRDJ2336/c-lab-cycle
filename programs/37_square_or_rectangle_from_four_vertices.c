#include <stdio.h>
/* squared distance between vertex i and vertex j */
#define SQ(i, j) ((long)(x[i]-x[j])*(x[i]-x[j]) + (long)(y[i]-y[j])*(y[i]-y[j]))
int main() {
    int x[4], y[4], i;
    long ab, bc, cd, da, ac, bd;
    printf("Enter 4 vertices in order (x y):\n");
    for (i = 0; i < 4; i++)
        scanf("%d %d", &x[i], &y[i]);
    ab = SQ(0, 1); bc = SQ(1, 2);
    cd = SQ(2, 3); da = SQ(3, 0);
    ac = SQ(0, 2); bd = SQ(1, 3);
    if (ab == cd && bc == da && ac == bd) {
        if (ab == bc)
            printf("Square\n");
        else
            printf("Rectangle\n");
    } else
        printf("Neither square nor rectangle\n");
    return 0;
}
