#include <stdio.h>
#include <math.h>
#define ll long long

// for i in range (1,N+1):
//     if int(math.sqrt(i)) * int(math.sqrt(i)) == i:
//         print(i,end=' ')

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

void scp(ll arr[], ll n) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (sqrt(arr[i]) * sqrt(arr[i]) == arr[i]) {
            printf("%lld ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\n%lld", sum);
}

int main() {
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    inp(arr, n);
    out(arr, n);
    printf("\n");
    scp(arr, n);        
    return 0;
}