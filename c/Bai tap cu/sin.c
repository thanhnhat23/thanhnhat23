#include <stdio.h>
#include <math.h>

const double EPS = pow(10, -6);
double sinx(double x) {
    double sinx, result = 1;
    long long n = 1, factorial = 1;
    x = x * M_PI/180;

    while (fabs(sinx) > EPS) {
        factorial *= (2 * n) * (2 * n - 1);
        sinx = pow(x, 2 * n) / factorial;
        result += sinx;
        n++;
    }
    return result;
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("sin(%.0lf) = %.3lf", x,sinx(x));
    printf("\nHam chuan cua sin(%.0lf) la: %.3lf", x,sin(x));
    return 0;
}