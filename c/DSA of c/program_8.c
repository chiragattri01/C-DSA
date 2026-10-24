#include <stdio.h>

int main() {
    float a, r;
    int n;

    printf("Enter investment: ");
    scanf("%f", &a);

    printf("Enter ratio: ");
    scanf("%f", &r);

    printf("Enter no of years: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        a = a * r;
        printf("Year %d: %.2f\n", i, a);
    }

    return 0;
}