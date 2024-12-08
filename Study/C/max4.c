#include <stdio.h>
int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    printf("%lld\n", max);
    return 0;
}
