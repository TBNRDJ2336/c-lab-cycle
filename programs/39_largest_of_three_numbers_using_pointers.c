#include <stdio.h>
int main() {
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", pa, pb, pc);
    if (*pa >= *pb && *pa >= *pc)
        printf("Largest = %d\n", *pa);
    else if (*pb >= *pc)
        printf("Largest = %d\n", *pb);
    else
        printf("Largest = %d\n", *pc);
    return 0;
}
