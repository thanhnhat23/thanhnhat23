#include <stdio.h>
#include <math.h>

long long ucln(long long a, long long b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}

long long bcnn(long long a, long long b) {
    return a * b / uclnn(a, b);
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", bcnn(a, b));
    return 0;
}