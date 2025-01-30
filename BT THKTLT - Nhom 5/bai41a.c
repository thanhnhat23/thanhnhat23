#include <stdio.h>
#include <stdbool.h>

void num() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = 10;
    int total = 0;
    for (int a = 0; a < len; a++) {
        for (int b = 0; b < len; b++) {
            if (a == b) continue;
            for (int c = 0; c < len; c++) {
                if (c == a || c == b) continue;
                for (int d = 0; d < len; d++) {
                    if (d == a || d == b || d == c) continue;
                    int pn = arr[a] * 10 + arr[b];
                    int pt = arr[c] * 10 + arr[d];
                    if (arr[a] != 0) {
                        printf("%d.%02d ", pn, pt);
                        total++;
                    }
                }
            }
        }
    }
    printf("\n%d", total);
}

int main() {
    num();
    return 0;
}