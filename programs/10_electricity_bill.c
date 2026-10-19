#include <stdio.h>
int main() {
    int cno, units;
    float amt;
    printf("Enter customer number and units: ");
    scanf("%d %d", &cno, &units);
    if (units <= 200)
        amt = 0.50 * units;
    else if (units <= 400)
        amt = 100 + 0.65 * (units - 200);
    else if (units <= 600)
        amt = 230 + 0.80 * (units - 400);
    else
        amt = 390 + 1.00 * (units - 600);
    printf("Customer %d, amount = Rs. %.2f\n", cno, amt);
    return 0;
}
