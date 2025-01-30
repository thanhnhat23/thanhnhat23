#include <stdio.h>
#include <math.h>

int total(int n) {
    int total = 0;
    for (int i = 1; i <= pow(n, 2); i++) {
        if ( i % 2 == 0 || i % 3 == 0) {
            total++;
        }
    }
    return total;
}

int main() { 
    int n;
    scanf("%d", &n);
    printf("%d", total(n));
}
