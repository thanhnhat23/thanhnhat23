#include <stdio.h>

int total(int n) {
    int dem = 0;
    while (n != 0) {
        int s = n % 10;
        n /= 10;
        dem++;
    }
    return dem;
}

int so_hanhphuc(int n) {
    int s1 = 0, s2 = 0;
    int count = total(n) / 2;
    int temp = n;
    for (int i = 1; i <= count; i++) {
        s1 += temp % 10;
        temp /= 10;
    }
    for (int i = 1; i <= count; i++) {
        s2 += temp % 10;
        temp /= 10;
    }
    return s1 == s2;
}

int main() {
    int n;
    scanf("%d", &n);
    if (total(n) % 2 == 0) {
        if (so_hanhphuc(n)) printf("YES");
        else printf("NO");
    }
    else printf("NO");
    return 0;
}