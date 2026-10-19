#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float m[3];
};
int main() {
    struct Student s;
    float total;
    printf("Roll number: ");
    scanf("%d", &s.roll);
    printf("Name: ");
    scanf(" %[^\n]", s.name);
    printf("Marks in 3 subjects: ");
    scanf("%f %f %f", &s.m[0], &s.m[1], &s.m[2]);
    total = s.m[0] + s.m[1] + s.m[2];
    printf("\nRoll: %d\nName: %s\n", s.roll, s.name);
    printf("Total: %.2f\nAverage: %.2f\n", total, total / 3);
    return 0;
}
