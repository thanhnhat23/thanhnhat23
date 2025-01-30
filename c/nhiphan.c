#include <stdio.h>

void nhiphan(int n, int arr[], int *size) {
    *size = 0;
    if (n == 0) {
        arr[(*size)++] = 0;
        return;
    }
    while (n > 0) {
        arr[(*size)++] = n % 2;
        n /= 2;
    }
}

int main() {
    int n;
    int arr[17], size;
    scanf("%d", &n);
    nhiphan(n, arr, &size);
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    return 0;
}
