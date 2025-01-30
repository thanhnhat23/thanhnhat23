#include <stdio.h>
#include <math.h>

int sotuman(int n) {
    int sum = 0, total = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
        total++;
    }
    return total;
}

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int total = sotuman(n);
    int origin = n;
    while (n != 0) {
        int s = n % 10;
        float temp = pow(s, total);
        sum += temp;
        n /= 10;
    }
    if ( sum == origin ) printf("YES");
    else printf("NO");
    return 0;
}
