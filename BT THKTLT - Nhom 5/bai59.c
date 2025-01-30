#include<stdio.h>
#define ll long long

void nhap(ll a[], ll n ){
	for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
}
void xuat(ll a[], ll n) {
    for (int i = 0; i < n; i++) {
        printf("%lld ", a[i]); 
    }
}

ll ucln(ll a, ll b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}
ll bcnn(ll a, ll b) {
    return a * b / ucln(a, b);
}

int main() { 
    ll n; 
    scanf("%lld", &n); 
    ll a[n]; 
    nhap(a, n);
    xuat(a, n); 
    ll uc = a[0], bc = a[0];
    for (int i = 1; i < n; i++) {
        uc = ucln(uc, a[i]);
        bc = bcnn(bc, a[i]);
    }
    printf("\n%lld", uc); 
    printf("\n%lld", bc);
} 