#include <stdio.h>

int main() {
    int n, a[101], M;
    int dem = 0;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ) {
        if ( n >= -100 &&  n <= 100 ) {
            scanf("%d", &a[i]);
        }
    }
    scanf("%d", &M);
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = i + 1; j <= n; j++ ) {
            if ( a[i] + a[j] == M ) {
                dem++;
            }
        }
    }
    printf("%d", dem);
}