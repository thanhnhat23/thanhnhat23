#include <stdio.h>
#include <stdlib.h>

void ccs(int n, int c) {
    char result[32];
    int index = 0;
    if (c < 2 || c > 36) {
        return;
    }
    while (n > 0) {
        int s = n % c;
        if (s < 10) {
            result[index++] = s + '0';
        } else {
            result[index++] = s - 10 + 'A';
        }
        n /= c;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", (result[i]));
    }
}

int main() {
    int n, c;
    scanf("%d", &n);
    scanf("%d", &c);
    ccs(n, c);
    return 0;
}