#include <stdio.h>
#include <string.h>

void chen(char a[], char b[]) {
    int i;
    int lena = strlen(a), lenb = strlen(b);
    while (lena < lenb) {
        for (i = lena - 1; i >= 0; i--) 
            a[i + 1] = a[i];
        lena++;
        a[0] = '0';
    }
    a[lena] = '\0';
}

void tong(char a[], char b[], char c[]) {
    int i;
    int du = 0;
    int n = strlen(a);
    for (i = n - 1; i >= 0; i--) {
        int num = (a[i] - '0') + (b[i] - '0') + du;
        c[i] = num % 10 + '0';
        du = num / 10;
    }
    if (du > 0) {
        for (i = n - 1; i >= 0; i--)
            c[i + 1] = c[i];
        c[0] = du + '0';
        c[n + 1] = '\0';
    } else {
        c[n] = '\0';
    }
}

void hieu(char a[], char b[], char c[]) {
    int du = 0;
    int n = strlen(a);
    int i;
    for (i = n - 1; i >= 0; i--) {
        int ai = a[i] - '0';
        int bi = b[i] - '0';
        int num;
        if (ai < (bi + du)) {
            num = ai + 10 - bi - du;
            du = 1;
        } else {
            num = ai - bi - du;
            du = 0;
        }
        c[i] = num + '0';
    }
    c[n] = '\0';
    for (i = 0; c[i] == '0' && c[i + 1] != '\0'; i++);
    if (i > 0) {
        memmove(c, c + i, strlen(c) - i + 1);
    }
}

int main() {
    char a[10000], b[10000], c[10000];
    int i, len;
    scanf("%s", a);
    scanf("%s", b);

    int lena = strlen(a), lenb = strlen(b);
    if (lena < lenb) chen(a, b);
    else chen(b, a);
    tong(a, b, c);
    printf("%s", c);
	
    c[0] = '\0';
    if (strcmp(a, b) >= 0) {
        hieu(a, b, c);
    } else {
        hieu(b, a, c);
        len = strlen(c);
        for (i = len; i > 0; i--)
            c[i] = c[i - 1];
        c[0] = '-';
        c[len + 1] = '\0';
    }
    printf("\n%s", c);
    return 0;
}
