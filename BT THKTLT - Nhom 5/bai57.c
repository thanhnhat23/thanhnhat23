#include <stdio.h>
#define ll long long

ll sohoanhao(ll n) {
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) return 1; // True
    else return 0; // False
}
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
int main() {
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    nhap(arr, n);
    xuat(arr, n);
    printf("\n");
    // Xoa cac so hoan hoa ra khoi mang
    for (int i = 0; i < n;) {
        if (sohoanhao(arr[i]) == 1) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
        } 
        else i++; // Tranh viec bo qua phan tu
    }
    xuat(arr, n);
    return 0;
}