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
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    inp(arr, n);
    out(arr, n);
    printf("\n");
    for (int i = 0; i < n;) {
        if (arr[i] < 0) {
            del(arr, &n, i);
        } 
        else i++;
    }
    out(arr, n);
    return 0;
}