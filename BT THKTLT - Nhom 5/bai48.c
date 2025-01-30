#include <stdio.h>
#include <math.h>
#define ll long long

const double EPS = pow(10, -6);
double cosx(double x, double eps) {
    double term = 1.0;
    double sum = term;
    int n = 1;
    while (fabs(term) >= eps) {
        term *= (-1.0) * x * x / (2 * n * (2 * n - 1));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    double x;
    scanf("%lf", &x);
    double result = cosx(x, EPS);
    printf("Gia tri cos(%lf): %lf\n", x, result);
    // So sanh voi ham chuan
    // printf("Gia tri cos(%lf) chuan: %lf\n", x, cos(x));
    return 0;
}

