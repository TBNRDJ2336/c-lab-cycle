#include <stdio.h>
int main() {
    int m;
    printf("Enter marks (0-100): ");
    scanf("%d", &m);
    if (m >= 90)      printf("Grade A+\n");
    else if (m >= 80) printf("Grade A\n");
    else if (m >= 70) printf("Grade B\n");
    else if (m >= 60) printf("Grade C\n");
    else if (m >= 50) printf("Grade D\n");
    else              printf("Grade F (Fail)\n");
    return 0;
}
