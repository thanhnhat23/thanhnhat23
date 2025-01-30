#include <stdio.h>
#define ll long long

// n!!
ll giaithua(int n) {
    ll result = 1;
    for (int i = n; i > 0; i -= 2) {
        result *= i;
    }
    return result;
}
// (-1)^(n+1) * n!!
ll cl_giaithua(int n) {
	ll kq = giaithua(n);
	ll s;
	// Tinh (-1)^(n+1)
    if (n % 2 == 0) s = -1;  // Nếu n chan s = -1
	else s = 1; // Neu n le s = 1
    return s * kq;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 2000) return 1;
    ll kqa = giaithua(n);
    ll kqb = cl_giaithua(n);
    printf("%lld", kqa);
    printf("\n%lld", kqb);
    return 0;
}

