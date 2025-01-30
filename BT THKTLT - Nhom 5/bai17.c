#include <stdio.h>
#include <math.h>

double min(double x, double y, double z) {
    if (x < y) {
        if (x < z) return x;
        else return z;
    } else {
        if (y < z) return y;
        else return z;
    }
}
double max(double x, double y, double z) {
    if (x > y) {
        if (x > z) return x;
        else return z;
    } else {
        if (y > z) return y;
        else return z;
    }
}

int main() {
    double x,y,z;
    double m = 999999;
    scanf("%lf%lf%lf", &x, &y, &z);
    // a
    printf("%lf" , min(x,y,z));
    // b
    printf("\n%lf", max(x,y,z));
    // c
    printf("\n%lf", min(x + y + z, x*y*z, m));
    // d
    double result = pow(min((x + y + z) / 2, x*y*z, m), 2);
    printf("\n%lf", result + 1.0);
    return 0;
}