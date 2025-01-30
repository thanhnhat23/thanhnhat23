#include <stdio.h>
double factorial(int num) {
    double result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main() {
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    double sum = 1.0;
    for (int i = 1; i <= n; i++) {
        sum += (pow(x, i) / factorial(i));
    }
    printf("%.2f\n", sum);
    return 0;
}