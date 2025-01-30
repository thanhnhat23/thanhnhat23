#include <stdio.h>
#include <string.h>

void multiply(char *result, int num) {
    int carry = 0;
    int length = strlen(result);
    for (int i = length - 1; i >= 0; i--) {
        int product = (result[i] - '0') * num + carry;
        result[i] = (product % 10) + '0';
        carry = product / 10;
    }
    while (carry) {
        for (int i = length; i >= 0; i--) {
            result[i + 1] = result[i];
        }
        result[0] = (carry % 10) + '0';
        carry /= 10;
        length++;
    }
}
void giaithua(int n) {
    char result[500];
    result[0] = '1';
    for (int i = 2; i <= n; i++) {
        multiply(result, i);
    }
    printf("%s", result);
}
int main() {
    int n;
    scanf("%d", &n);
    giaithua(n);
    return 0;
}