#include <stdio.h>
struct Date { int d, m, y; };
int daysIn(int m, int y) {
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
        return 29;
    return days[m - 1];
}
int main() {
    struct Date d1, d2, r;
    printf("Earlier date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &d1.d, &d1.m, &d1.y);
    printf("Later date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &d2.d, &d2.m, &d2.y);
    if (d2.d < d1.d) {
        d2.d += daysIn(d1.m, d1.y);
        d2.m--;
    }
    if (d2.m < d1.m) {
        d2.m += 12;
        d2.y--;
    }
    r.d = d2.d - d1.d;
    r.m = d2.m - d1.m;
    r.y = d2.y - d1.y;
    printf("Elapsed: %d years, %d months, %d days\n", r.y, r.m, r.d);
    return 0;
}
