#include <stdio.h>
#include <stdbool.h>
#define ll long long

// San so nguyen to ( O**n6 )
// Time = 0.8s
// def snt(x):
//     c = []
//     p = [True]*x
//     for i in range (2,x):
//         for j in range (i*i,x,i):
//             p[j] = False
//     for i in range (2,x):
//         if p[i]: c.append(i)
//     return c
// result = []
// print(snt(n))

void inp(ll arr[], ll n ){
	for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
}
void out(ll arr[], ll n) {
    for (int i = 0; i < n; i++) {
        printf("%lld ", arr[i]); 
    }
}

void snt(ll m, bool c[]) {
    for (int i = 0; i <= m; i++) {
        c[i] = true; // Tat cac phan tu la snt
    }
    c[0] = c[1] = false; // 0 và 1 khong phai snt
    for (int i = 2; i * i <= m; i++) {
        if (c[i]) {
            for (int j = i * i; j <= m; j += i) {
                c[j] = false; // Flag khong phai snt
            }
        }
    }
}

int main() {
    ll n, s, sum = 0;
    scanf("%lld", &n);
    if ( n >= 15 ) {
        ll arr[n];
        inp(arr, n);
        out(arr, n);
        // Tao bang snt bang phan tu lon nhat
        ll m = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > m) {
                m = arr[i];
            }
        }
        bool c[m + 1];
        snt(m, c);

        for (int i = 0; i < n; i++) {
            if (c[arr[i]]) {
                sum += arr[i];
            }
        }
        printf("\n%lld", sum);
    }
    return 0;
}