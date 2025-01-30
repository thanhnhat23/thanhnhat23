#include <stdio.h>
#include <math.h>

double dientich(double a, double b, double alpha) {
    // Doi goc tu do sang rad
    double rad = alpha * M_PI / 180.0;
    // Tinh chieu cao h
    double h = (a - b) * tan(rad);
    // Tinh dien tich
    double s = (a + b) * h / 2.0;
    return s;
}

int main() {
    double a, b, alpha;
    printf("Nhap do dai a, b va goc alpha: ");
    scanf("%lf%lf%lf", &a, &b, &alpha);
    double s = dientich(a, b, alpha);
    printf("Dien tich: %.2lf\n", s);
    return 0;
}
