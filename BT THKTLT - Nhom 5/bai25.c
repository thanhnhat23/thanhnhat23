#include <stdio.h>
#include <math.h>

double cal(double x, double a, int n) {
    double result = pow(x + a, 2);
    for (int i = 1; i <= n; i++) {
		// Tinh n ngoac
        result +=  pow(a, 2);
    }
	result += a; // Cong them a vao cuoi cung
    return result;
}

int main() {
    int n;
    double a, x;
    do {
        scanf("%lf %lf %d", &x, &a, &n);
    } while (n < 1);
    double result = cal(x, a, n);
    printf("%.5lf", result);
    return 0;
}
