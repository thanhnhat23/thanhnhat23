#include <stdio.h>
int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
