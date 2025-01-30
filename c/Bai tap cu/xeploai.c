#include <stdio.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double finalScore = 0.2 * (a + b) + 0.6 * c;
    if (finalScore >= 8.5) {
        printf("A\n");
    } else if (finalScore >= 7.0) {
        printf("B\n");
    } else if (finalScore >= 5.5) {
        printf("C\n");
    } else if (finalScore >= 4.0) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    return 0;
}
