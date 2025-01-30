#include <stdio.h>
#define ll long long

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

void del(ll arr[], ll *n, ll index) {
    if (index < 0 || index >= *n) {
        return;
    }
    // Dich phan tu ve cuoi mang
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Giam so luong phan tu trong mang
    (*n)--;
}

int main() {
    ll n, k;
    scanf("%lld%lld", &n, &k);
    ll arr[n];
    inp(arr, n);
    for (int i = 0; i < n;) {
        if (arr[i] == k) {
            del(arr, &n, i);
        } else {
            i++;
        }
    }
    out(arr, n);
    return 0;
}