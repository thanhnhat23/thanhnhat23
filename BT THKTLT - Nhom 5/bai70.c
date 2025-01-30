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

ll sortArr(ll arr[], ll n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                ll t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int main() {
    ll x,y;
    scanf("%lld%lld", &x, &y);
    ll arrA[x + 100], arrB[y];
    inp(arrA, x); // Nhap mang A
    inp(arrB, y); // Nhap mang B
    out(arrA, x); // Xuat mang A
    printf("\n");
    out(arrB, y); // Xuat mang B
    // Mang A + B
    for (int i = 0; i < y; i++) {
        arrA[x + i] = arrB[i];
    }
    sortArr(arrA, x + y);
    printf("\n");
    out(arrA, x + y); // Xuat mang A + B
    return 0;
}