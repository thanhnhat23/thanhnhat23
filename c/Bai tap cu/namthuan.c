#include <stdio.h>
int main() {
    unsigned long long n;
    scanf("%llu", &n);
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
