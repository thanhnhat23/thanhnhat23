#include <stdio.h>
#define ull unsigned long long

// n!!
ull giaithua(int n) {
    ull result = 1;
    for (int i = n; i > 0; i -= 2) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    ull result = giaithua(n);
    printf("%llu", result);
    return 0;
}