#include <stdio.h>

long long ucln(long long a, long long b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", ucln(a,b));
}
