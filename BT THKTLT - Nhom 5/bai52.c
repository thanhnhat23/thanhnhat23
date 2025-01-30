#include <stdio.h>

int cnk(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return cnk(n - 1, k - 1) + cnk(n - 1, k);
}

void tamgiac_pascal(int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", cnk(i, k));
        }
        printf("\n");
    }
}

int main() {
    int r;
    scanf("%d", &r);
    tamgiac_pascal(r);
    return 0;
}
